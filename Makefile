.PHONY = run_example update

run_example:
	carp -x --log-memory example.carp

update:
	deno run --allow-net --allow-write --allow-run --unstable updates-script.js

