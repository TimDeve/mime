import { writeFileStr } from "https://deno.land/std@0.57.0/fs/mod.ts"

function genGperf(db) {
  const mapping = {}

  for (const mimetype in db) {
    const exts = db[mimetype]?.extensions || []

    for (const ext of exts) {
      mapping[ext] = mimetype
    }
  }

  const cases = Object.entries(mapping)
                      .map(([ext, mimetype]) => `${ext}, "${mimetype}"`)
                      .join("\n")

  const gperf = `%struct-type
%readonly-tables
%global-table
%define slot-name ext
%includes
%define hash-function-name Mime__gperf_hash
%define lookup-function-name Mime__gperf_lookup
%define word-array-name Mime__gperf_wordlist
struct Mime__pair { const char *ext; const char *mime; };
%%
${cases}
%%
char *Mime__getmime(register const char *str, register size_t len) {
  const struct Mime__pair *pair = Mime__gperf_lookup(str, len);

  if (pair) {
    return (char *)pair->mime;
  }
  else {
    return NULL;
  }
}
`

  return gperf
}

const res = await fetch("https://cdn.jsdelivr.net/gh/jshttp/mime-db@master/db.json")
const body = await res.json()
await writeFileStr("mime.gperf", genGperf(body))

const gperf = Deno.run({
  cmd: ["gperf", "mime.gperf", "--output-file=mime.h"],
})

const status = await gperf.status()

Deno.exit(status.code)

