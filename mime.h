/* ANSI-C code produced by gperf version 3.1 */
/* Command-line: gperf --output-file=mime.h mime.gperf  */
/* Computed positions: -k'1-4,6,$' */

#if !((' ' == 32) && ('!' == 33) && ('"' == 34) && ('#' == 35) \
      && ('%' == 37) && ('&' == 38) && ('\'' == 39) && ('(' == 40) \
      && (')' == 41) && ('*' == 42) && ('+' == 43) && (',' == 44) \
      && ('-' == 45) && ('.' == 46) && ('/' == 47) && ('0' == 48) \
      && ('1' == 49) && ('2' == 50) && ('3' == 51) && ('4' == 52) \
      && ('5' == 53) && ('6' == 54) && ('7' == 55) && ('8' == 56) \
      && ('9' == 57) && (':' == 58) && (';' == 59) && ('<' == 60) \
      && ('=' == 61) && ('>' == 62) && ('?' == 63) && ('A' == 65) \
      && ('B' == 66) && ('C' == 67) && ('D' == 68) && ('E' == 69) \
      && ('F' == 70) && ('G' == 71) && ('H' == 72) && ('I' == 73) \
      && ('J' == 74) && ('K' == 75) && ('L' == 76) && ('M' == 77) \
      && ('N' == 78) && ('O' == 79) && ('P' == 80) && ('Q' == 81) \
      && ('R' == 82) && ('S' == 83) && ('T' == 84) && ('U' == 85) \
      && ('V' == 86) && ('W' == 87) && ('X' == 88) && ('Y' == 89) \
      && ('Z' == 90) && ('[' == 91) && ('\\' == 92) && (']' == 93) \
      && ('^' == 94) && ('_' == 95) && ('a' == 97) && ('b' == 98) \
      && ('c' == 99) && ('d' == 100) && ('e' == 101) && ('f' == 102) \
      && ('g' == 103) && ('h' == 104) && ('i' == 105) && ('j' == 106) \
      && ('k' == 107) && ('l' == 108) && ('m' == 109) && ('n' == 110) \
      && ('o' == 111) && ('p' == 112) && ('q' == 113) && ('r' == 114) \
      && ('s' == 115) && ('t' == 116) && ('u' == 117) && ('v' == 118) \
      && ('w' == 119) && ('x' == 120) && ('y' == 121) && ('z' == 122) \
      && ('{' == 123) && ('|' == 124) && ('}' == 125) && ('~' == 126))
/* The character set is not based on ISO-646.  */
#error "gperf generated tables don't work with this execution character set. Please report a bug to <bug-gperf@gnu.org>."
#endif

#line 9 "mime.gperf"
struct Mime__pair { const char *ext; const char *mime; };
#include <string.h>

#define TOTAL_KEYWORDS 1157
#define MIN_WORD_LENGTH 1
#define MAX_WORD_LENGTH 24
#define MIN_HASH_VALUE 1
#define MAX_HASH_VALUE 7278
/* maximum key range = 7278, duplicates = 0 */

#ifdef __GNUC__
__inline
#else
#ifdef __cplusplus
inline
#endif
#endif
static unsigned int
Mime__gperf_hash (register const char *str, register size_t len)
{
  static const unsigned short asso_values[] =
    {
      7279, 7279, 7279, 7279, 7279, 7279, 7279, 7279, 7279, 7279,
      7279, 7279, 7279, 7279, 7279, 7279, 7279, 7279, 7279, 7279,
      7279, 7279, 7279, 7279, 7279, 7279, 7279, 7279, 7279, 7279,
      7279, 7279, 7279, 7279, 7279, 7279, 7279, 7279, 7279, 7279,
      7279, 7279, 7279, 7279, 7279,    0, 7279, 7279,   30,    5,
       125,  915,   80,    0,   20,   50,   45,   25, 7279, 7279,
      7279, 7279, 7279, 7279,    0, 7279, 7279, 7279,  355,   10,
       345, 1965,    0,    0,   30,   25,    5, 7279, 7279, 7279,
      7279, 7279, 7279, 7279, 7279, 7279, 7279, 7279, 7279, 7279,
      7279, 7279, 7279, 7279, 7279,    5, 7279, 1045, 1635,  220,
        10, 1220,   90, 1700, 1722, 1215,  242, 1020,  395,    5,
      1710,  995,   55, 1435,  840,    0,   15,   42,  295,  140,
        40, 1222,  752,  402,   17,  820,   47, 1352, 1165, 1602,
      1872,  640,  435,  302,  800, 1595,   10, 1430,   39,  304,
         5,  640, 7279, 7279, 7279, 7279, 7279, 7279, 7279, 7279,
      7279, 7279, 7279, 7279, 7279, 7279, 7279, 7279, 7279, 7279,
      7279, 7279, 7279, 7279, 7279, 7279, 7279, 7279, 7279, 7279,
      7279, 7279, 7279, 7279, 7279, 7279, 7279, 7279, 7279, 7279,
      7279, 7279, 7279, 7279, 7279, 7279, 7279, 7279, 7279, 7279,
      7279, 7279, 7279, 7279, 7279, 7279, 7279, 7279, 7279, 7279,
      7279, 7279, 7279, 7279, 7279, 7279, 7279, 7279, 7279, 7279,
      7279, 7279, 7279, 7279, 7279, 7279, 7279, 7279, 7279, 7279,
      7279, 7279, 7279, 7279, 7279, 7279, 7279, 7279, 7279, 7279,
      7279, 7279, 7279, 7279, 7279, 7279, 7279, 7279, 7279, 7279,
      7279, 7279, 7279, 7279, 7279, 7279, 7279, 7279, 7279, 7279,
      7279, 7279, 7279, 7279, 7279, 7279, 7279, 7279, 7279, 7279,
      7279, 7279, 7279, 7279, 7279, 7279, 7279, 7279, 7279, 7279,
      7279, 7279, 7279, 7279, 7279
    };
  register unsigned int hval = len;

  switch (hval)
    {
      default:
        hval += asso_values[(unsigned char)str[5]];
      /*FALLTHROUGH*/
      case 5:
      case 4:
        hval += asso_values[(unsigned char)str[3]];
      /*FALLTHROUGH*/
      case 3:
        hval += asso_values[(unsigned char)str[2]];
      /*FALLTHROUGH*/
      case 2:
        hval += asso_values[(unsigned char)str[1]+19];
      /*FALLTHROUGH*/
      case 1:
        hval += asso_values[(unsigned char)str[0]];
        break;
    }
  return hval + asso_values[(unsigned char)str[len - 1]];
}

static const struct Mime__pair Mime__gperf_wordlist[] =
  {
    {""},
#line 1076 "mime.gperf"
    {"s", "text/x-asm"},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""},
#line 582 "mime.gperf"
    {"sus", "application/vnd.sus-calendar"},
    {""}, {""}, {""}, {""},
#line 467 "mime.gperf"
    {"mus", "application/vnd.musician"},
#line 1099 "mime.gperf"
    {"sass", "text/x-sass"},
#line 585 "mime.gperf"
    {"sis", "application/vnd.symbian.install"},
    {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 87 "mime.gperf"
    {"m21", "application/mp21"},
    {""},
#line 419 "mime.gperf"
    {"dis", "application/vnd.mobius.dis"},
#line 1052 "mime.gperf"
    {"t", "text/troff"},
    {""}, {""},
#line 71 "mime.gperf"
    {"mads", "application/mads+xml"},
    {""}, {""}, {""}, {""},
#line 85 "mime.gperf"
    {"musd", "application/mmt-usd+xml"},
#line 966 "mime.gperf"
    {"sid", "image/x-mrsid-image"},
    {""}, {""}, {""}, {""},
#line 829 "mime.gperf"
    {"mid", "audio/midi"},
    {""}, {""}, {""}, {""},
#line 760 "mime.gperf"
    {"sit", "application/x-stuffit"},
    {""}, {""}, {""}, {""},
#line 1155 "mime.gperf"
    {"mks", "video/x-matroska"},
    {""}, {""}, {""}, {""},
#line 398 "mime.gperf"
    {"skm", "application/vnd.koan"},
#line 103 "mime.gperf"
    {"dist", "application/octet-stream"},
    {""}, {""},
#line 83 "mime.gperf"
    {"mets", "application/mets+xml"},
#line 200 "mime.gperf"
    {"1km", "application/vnd.1000minds.decision-model+xml"},
    {""}, {""},
#line 554 "mime.gperf"
    {"twds", "application/vnd.simtech-mindmapper"},
#line 547 "mime.gperf"
    {"semd", "application/vnd.semd"},
#line 396 "mime.gperf"
    {"skd", "application/vnd.koan"},
    {""},
#line 18 "mime.gperf"
    {"dwd", "application/atsc-dwd+xml"},
#line 1097 "mime.gperf"
    {"pas", "text/x-pascal"},
    {""},
#line 1093 "mime.gperf"
    {"mkd", "text/x-markdown"},
    {""},
#line 553 "mime.gperf"
    {"twd", "application/vnd.simtech-mindmapper"},
    {""}, {""},
#line 397 "mime.gperf"
    {"skt", "application/vnd.koan"},
    {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 139 "mime.gperf"
    {"p7s", "application/pkcs7-signature"},
    {""}, {""}, {""}, {""}, {""}, {""},
#line 975 "mime.gperf"
    {"xbm", "image/x-xbitmap"},
#line 1104 "mime.gperf"
    {"uu", "text/x-uuencode"},
    {""},
#line 137 "mime.gperf"
    {"p7m", "application/pkcs7-mime"},
    {""}, {""},
#line 586 "mime.gperf"
    {"sisx", "application/vnd.symbian.install"},
#line 977 "mime.gperf"
    {"xwd", "image/x-xwindowdump"},
    {""}, {""},
#line 318 "mime.gperf"
    {"xbd", "application/vnd.fujixerox.docuworks.binder"},
    {""}, {""},
#line 788 "mime.gperf"
    {"pem", "application/x-x509-ca-cert"},
    {""},
#line 970 "mime.gperf"
    {"pbm", "image/x-portable-bitmap"},
#line 1096 "mime.gperf"
    {"p", "text/x-pascal"},
    {""}, {""}, {""}, {""},
#line 761 "mime.gperf"
    {"sitx", "application/x-stuffitx"},
    {""}, {""}, {""},
#line 525 "mime.gperf"
    {"pbd", "application/vnd.powerbuilder6"},
    {""}, {""}, {""},
#line 583 "mime.gperf"
    {"susp", "application/vnd.sus-calendar"},
    {""},
#line 891 "mime.gperf"
    {"fits", "image/fits"},
#line 140 "mime.gperf"
    {"p8", "application/pkcs8"},
    {""},
#line 1034 "mime.gperf"
    {"text", "text/plain"},
    {""}, {""}, {""},
#line 63 "mime.gperf"
    {"map", "application/json"},
    {""},
#line 941 "mime.gperf"
    {"fbs", "image/vnd.fastbidsheet"},
    {""}, {""},
#line 770 "mime.gperf"
    {"tex", "application/x-tex"},
#line 107 "mime.gperf"
    {"dump", "application/octet-stream"},
    {""}, {""}, {""},
#line 951 "mime.gperf"
    {"tap", "image/vnd.tencent.tap"},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 947 "mime.gperf"
    {"dds", "image/vnd.ms-dds"},
    {""}, {""}, {""},
#line 1029 "mime.gperf"
    {"md", "text/markdown"},
#line 1089 "mime.gperf"
    {"f90", "text/x-fortran"},
    {""},
#line 395 "mime.gperf"
    {"skp", "application/vnd.koan"},
    {""}, {""},
#line 564 "mime.gperf"
    {"sdd", "application/vnd.stardivision.impress"},
    {""}, {""}, {""}, {""},
#line 758 "mime.gperf"
    {"xap", "application/x-silverlight-app"},
#line 634 "mime.gperf"
    {"wasm", "application/wasm"},
    {""}, {""}, {""},
#line 316 "mime.gperf"
    {"ddd", "application/vnd.fujixerox.ddd"},
    {""}, {""}, {""}, {""},
#line 681 "mime.gperf"
    {"wad", "application/x-doom"},
    {""}, {""},
#line 1086 "mime.gperf"
    {"f", "text/x-fortran"},
    {""}, {""}, {""},
#line 261 "mime.gperf"
    {"wbs", "application/vnd.criticaltools.wbs+xml"},
    {""}, {""}, {""}, {""},
#line 461 "mime.gperf"
    {"wks", "application/vnd.ms-works"},
    {""}, {""},
#line 589 "mime.gperf"
    {"xdm", "application/vnd.syncml.dm+xml"},
    {""}, {""}, {""}, {""},
#line 627 "mime.gperf"
    {"saf", "application/vnd.yamaha.smaf-audio"},
    {""}, {""}, {""}, {""}, {""}, {""},
#line 417 "mime.gperf"
    {"mif", "application/vnd.mif"},
    {""}, {""},
#line 418 "mime.gperf"
    {"daf", "application/vnd.mobius.daf"},
    {""}, {""}, {""}, {""}, {""}, {""},
#line 927 "mime.gperf"
    {"tif", "image/tiff"},
    {""}, {""}, {""}, {""}, {""}, {""},
#line 757 "mime.gperf"
    {"swf", "application/x-shockwave-flash"},
#line 1088 "mime.gperf"
    {"f77", "text/x-fortran"},
    {""}, {""}, {""},
#line 413 "mime.gperf"
    {"mwf", "application/vnd.mfer"},
#line 1031 "mime.gperf"
    {"mdx", "text/mdx"},
#line 548 "mime.gperf"
    {"semf", "application/vnd.semf"},
    {""}, {""},
#line 996 "mime.gperf"
    {"dwf", "model/vnd.dwf"},
#line 1036 "mime.gperf"
    {"def", "text/plain"},
    {""}, {""}, {""}, {""},
#line 869 "mime.gperf"
    {"wax", "audio/x-ms-wax"},
    {""},
#line 954 "mime.gperf"
    {"xif", "image/vnd.xiff"},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""},
#line 175 "mime.gperf"
    {"sdp", "application/sdp"},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 42 "mime.gperf"
    {"fdt", "application/fdt+xml"},
    {""}, {""}, {""}, {""},
#line 446 "mime.gperf"
    {"cat", "application/vnd.ms-pki.seccat"},
    {""},
#line 375 "mime.gperf"
    {"jam", "application/vnd.jam"},
    {""}, {""}, {""},
#line 30 "mime.gperf"
    {"cu", "application/cu-seeme"},
    {""}, {""}, {""}, {""}, {""},
#line 1072 "mime.gperf"
    {"jad", "text/vnd.sun.j2me.app-descriptor"},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""},
#line 215 "mime.gperf"
    {"xdp", "application/vnd.adobe.xdp+xml"},
    {""},
#line 658 "mime.gperf"
    {"cbt", "application/x-cbr"},
    {""}, {""},
#line 172 "mime.gperf"
    {"scs", "application/scvp-cv-response"},
#line 1100 "mime.gperf"
    {"scss", "text/x-scss"},
    {""},
#line 953 "mime.gperf"
    {"wbmp", "image/vnd.wap.wbmp"},
    {""}, {""}, {""}, {""},
#line 928 "mime.gperf"
    {"tiff", "image/tiff"},
    {""},
#line 407 "mime.gperf"
    {"scm", "application/vnd.lotus-screencam"},
    {""}, {""}, {""},
#line 597 "mime.gperf"
    {"mxs", "application/vnd.triscape.mxs"},
#line 411 "mime.gperf"
    {"mc1", "application/vnd.medcalcdata"},
    {""},
#line 610 "mime.gperf"
    {"vis", "application/vnd.visionary"},
    {""},
#line 578 "mime.gperf"
    {"sxm", "application/vnd.sun.xml.math"},
#line 737 "mime.gperf"
    {"scd", "application/x-msschedule"},
    {""}, {""}, {""}, {""},
#line 410 "mime.gperf"
    {"mcd", "application/vnd.mcd"},
    {""}, {""}, {""},
#line 574 "mime.gperf"
    {"sxd", "application/vnd.sun.xml.draw"},
    {""}, {""},
#line 738 "mime.gperf"
    {"trm", "application/x-msterminal"},
    {""}, {""},
#line 590 "mime.gperf"
    {"ddf", "application/vnd.syncml.dmddf+xml"},
    {""},
#line 762 "mime.gperf"
    {"srt", "application/x-subrip"},
    {""}, {""},
#line 22 "mime.gperf"
    {"xcs", "application/calendar+xml"},
    {""}, {""}, {""},
#line 320 "mime.gperf"
    {"txd", "application/vnd.genomatix.tuxedo"},
    {""}, {""}, {""}, {""}, {""},
#line 593 "mime.gperf"
    {"cap", "application/vnd.tcpdump.pcap"},
    {""}, {""}, {""},
#line 1033 "mime.gperf"
    {"txt", "text/plain"},
#line 519 "mime.gperf"
    {"paw", "application/vnd.pawaafile"},
    {""}, {""}, {""}, {""},
#line 845 "mime.gperf"
    {"s3m", "audio/s3m"},
    {""}, {""}, {""}, {""},
#line 91 "mime.gperf"
    {"xdf", "application/xcap-diff+xml"},
    {""},
#line 660 "mime.gperf"
    {"cb7", "application/x-cbr"},
    {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 377 "mime.gperf"
    {"jisp", "application/vnd.jisp"},
    {""}, {""}, {""}, {""},
#line 131 "mime.gperf"
    {"pdf", "application/pdf"},
    {""}, {""}, {""}, {""},
#line 968 "mime.gperf"
    {"pct", "image/x-pict"},
    {""},
#line 186 "mime.gperf"
    {"srx", "application/sparql-results+xml"},
    {""}, {""},
#line 374 "mime.gperf"
    {"fcs", "application/vnd.isac.fcs"},
#line 189 "mime.gperf"
    {"sru", "application/sru+xml"},
#line 32 "mime.gperf"
    {"davmount", "application/davmount+xml"},
    {""}, {""},
#line 949 "mime.gperf"
    {"wdp", "image/vnd.ms-photo"},
    {""}, {""},
#line 1142 "mime.gperf"
    {"mxu", "video/vnd.mpegurl"},
    {""}, {""}, {""}, {""}, {""}, {""},
#line 501 "mime.gperf"
    {"dd2", "application/vnd.oma.dd2+xml"},
    {""},
#line 35 "mime.gperf"
    {"xdssc", "application/dssc+xml"},
    {""}, {""},
#line 1012 "mime.gperf"
    {"x3d", "model/x3d+xml"},
    {""}, {""}, {""}, {""},
#line 298 "mime.gperf"
    {"fdf", "application/vnd.fdf"},
    {""}, {""}, {""}, {""},
#line 865 "mime.gperf"
    {"caf", "audio/x-caf"},
    {""},
#line 876 "mime.gperf"
    {"cif", "chemical/x-cif"},
    {""}, {""},
#line 566 "mime.gperf"
    {"sdw", "application/vnd.stardivision.writer"},
    {""}, {""}, {""},
#line 560 "mime.gperf"
    {"dxp", "application/vnd.spotfire.dxp"},
    {""},
#line 212 "mime.gperf"
    {"fcdt", "application/vnd.adobe.formscentral.fcdt"},
    {""}, {""}, {""},
#line 955 "mime.gperf"
    {"pcx", "image/x-pcx"},
    {""}, {""}, {""},
#line 868 "mime.gperf"
    {"m3u", "audio/x-mpegurl"},
#line 346 "mime.gperf"
    {"les", "application/vnd.hhe.lesson-player"},
#line 1027 "mime.gperf"
    {"less", "text/less"},
    {""},
#line 1078 "mime.gperf"
    {"c", "text/x-c"},
    {""},
#line 875 "mime.gperf"
    {"cdx", "chemical/x-cdx"},
    {""}, {""},
#line 1037 "mime.gperf"
    {"list", "text/plain"},
    {""},
#line 462 "mime.gperf"
    {"wcm", "application/vnd.ms-works"},
    {""}, {""}, {""}, {""},
#line 926 "mime.gperf"
    {"t38", "image/t38"},
    {""}, {""}, {""}, {""}, {""}, {""},
#line 401 "mime.gperf"
    {"lbd", "application/vnd.llamagraphics.life-balance.desktop"},
    {""}, {""},
#line 317 "mime.gperf"
    {"xdw", "application/vnd.fujixerox.docuworks"},
    {""}, {""}, {""}, {""}, {""}, {""},
#line 1084 "mime.gperf"
    {"dic", "text/x-c"},
    {""}, {""},
#line 136 "mime.gperf"
    {"p10", "application/pkcs10"},
    {""},
#line 808 "mime.gperf"
    {"xht", "application/xhtml+xml"},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""},
#line 229 "mime.gperf"
    {"m3u8", "application/vnd.apple.mpegurl"},
    {""}, {""}, {""}, {""}, {""},
#line 94 "mime.gperf"
    {"mxf", "application/mxf"},
    {""}, {""},
#line 963 "mime.gperf"
    {"fh5", "image/x-freehand"},
    {""},
#line 940 "mime.gperf"
    {"dxf", "image/vnd.dxf"},
#line 833 "mime.gperf"
    {"mxmf", "audio/mobile-xmf"},
    {""}, {""}, {""},
#line 424 "mime.gperf"
    {"txf", "application/vnd.mobius.txf"},
    {""}, {""}, {""},
#line 444 "mime.gperf"
    {"thmx", "application/vnd.ms-officetheme"},
#line 213 "mime.gperf"
    {"fxp", "application/vnd.adobe.fxp"},
#line 678 "mime.gperf"
    {"w3d", "application/x-director"},
    {""},
#line 357 "mime.gperf"
    {"list3820", "application/vnd.ibm.modcap"},
    {""}, {""},
#line 742 "mime.gperf"
    {"pac", "application/x-ns-proxy-autoconfig"},
    {""},
#line 967 "mime.gperf"
    {"pic", "image/x-pict"},
    {""},
#line 359 "mime.gperf"
    {"sc", "application/vnd.ibm.secure-container"},
    {""}, {""}, {""}, {""}, {""},
#line 731 "mime.gperf"
    {"m14", "application/x-msmediaview"},
    {""}, {""}, {""}, {""},
#line 138 "mime.gperf"
    {"p7c", "application/pkcs7-mime"},
    {""}, {""}, {""}, {""},
#line 691 "mime.gperf"
    {"pcf", "application/x-font-pcf"},
#line 24 "mime.gperf"
    {"cdfx", "application/cdfx+xml"},
    {""}, {""}, {""}, {""}, {""},
#line 135 "mime.gperf"
    {"prf", "application/pics-rules"},
    {""},
#line 151 "mime.gperf"
    {"cww", "application/prs.cww"},
#line 741 "mime.gperf"
    {"cdf", "application/x-netcdf"},
    {""},
#line 725 "mime.gperf"
    {"crd", "application/x-mscardfile"},
    {""},
#line 408 "mime.gperf"
    {"lwp", "application/vnd.lotus-wordpro"},
#line 676 "mime.gperf"
    {"cct", "application/x-director"},
#line 915 "mime.gperf"
    {"jxs", "image/jxs"},
#line 918 "mime.gperf"
    {"jxss", "image/jxss"},
    {""}, {""}, {""}, {""},
#line 787 "mime.gperf"
    {"crt", "application/x-x509-ca-cert"},
    {""},
#line 677 "mime.gperf"
    {"cxt", "application/x-director"},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""},
#line 705 "mime.gperf"
    {"php", "application/x-httpd-php"},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 356 "mime.gperf"
    {"listafp", "application/vnd.ibm.modcap"},
    {""}, {""}, {""},
#line 562 "mime.gperf"
    {"sdc", "application/vnd.stardivision.calc"},
    {""},
#line 180 "mime.gperf"
    {"shf", "application/shf+xml"},
    {""},
#line 579 "mime.gperf"
    {"sxw", "application/vnd.sun.xml.writer"},
    {""}, {""}, {""}, {""}, {""},
#line 1105 "mime.gperf"
    {"vcs", "text/x-vcalendar"},
    {""},
#line 964 "mime.gperf"
    {"fh7", "image/x-freehand"},
    {""}, {""},
#line 618 "mime.gperf"
    {"wqd", "application/vnd.wqd"},
    {""}, {""}, {""}, {""}, {""}, {""},
#line 665 "mime.gperf"
    {"crx", "application/x-chrome-extension"},
    {""},
#line 1080 "mime.gperf"
    {"cxx", "text/x-c"},
#line 1126 "mime.gperf"
    {"m2v", "video/mpeg"},
    {""},
#line 181 "mime.gperf"
    {"siv", "application/sieve"},
#line 74 "mime.gperf"
    {"mrcx", "application/marcxml+xml"},
    {""},
#line 661 "mime.gperf"
    {"vcd", "application/x-cdlink"},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""},
#line 612 "mime.gperf"
    {"wbxml", "application/vnd.wap.wbxml"},
    {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 441 "mime.gperf"
    {"chm", "application/vnd.ms-htmlhelp"},
    {""}, {""},
#line 644 "mime.gperf"
    {"x32", "application/x-authorware-bin"},
    {""},
#line 645 "mime.gperf"
    {"u32", "application/x-authorware-bin"},
    {""}, {""}, {""}, {""},
#line 1153 "mime.gperf"
    {"mkv", "video/x-matroska"},
    {""}, {""},
#line 802 "mime.gperf"
    {"xav", "application/xcap-att+xml"},
    {""}, {""}, {""}, {""},
#line 1144 "mime.gperf"
    {"pyv", "video/vnd.ms-playready.media.pyv"},
    {""},
#line 962 "mime.gperf"
    {"fh4", "image/x-freehand"},
    {""}, {""},
#line 237 "mime.gperf"
    {"mpm", "application/vnd.blueice.multipass"},
    {""}, {""}, {""}, {""},
#line 746 "mime.gperf"
    {"p12", "application/x-pkcs12"},
    {""}, {""}, {""}, {""},
#line 31 "mime.gperf"
    {"mpd", "application/dash+xml"},
    {""}, {""}, {""}, {""},
#line 605 "mime.gperf"
    {"vcx", "application/vnd.vcx"},
    {""}, {""}, {""}, {""},
#line 457 "mime.gperf"
    {"mpt", "application/vnd.ms-project"},
    {""}, {""}, {""}, {""},
#line 465 "mime.gperf"
    {"xps", "application/vnd.ms-xpsdocument"},
    {""}, {""}, {""}, {""},
#line 596 "mime.gperf"
    {"tpt", "application/vnd.trid.tpt"},
    {""}, {""}, {""}, {""},
#line 976 "mime.gperf"
    {"xpm", "image/x-xpixmap"},
    {""}, {""}, {""}, {""},
#line 449 "mime.gperf"
    {"pps", "application/vnd.ms-powerpoint"},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 514 "mime.gperf"
    {"dp", "application/vnd.osgi.dp"},
#line 972 "mime.gperf"
    {"ppm", "image/x-portable-pixmap"},
#line 454 "mime.gperf"
    {"ppsm", "application/vnd.ms-powerpoint.slideshow.macroenabled.12"},
#line 443 "mime.gperf"
    {"lrm", "application/vnd.ms-lrm"},
    {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 263 "mime.gperf"
    {"ppd", "application/vnd.cups-ppd"},
    {""},
#line 782 "mime.gperf"
    {"vhd", "application/x-virtualbox-vhd"},
    {""}, {""},
#line 844 "mime.gperf"
    {"spx", "audio/ogg"},
#line 452 "mime.gperf"
    {"pptm", "application/vnd.ms-powerpoint.presentation.macroenabled.12"},
    {""}, {""}, {""},
#line 448 "mime.gperf"
    {"ppt", "application/vnd.ms-powerpoint"},
#line 89 "mime.gperf"
    {"mp4s", "application/mp4"},
    {""}, {""}, {""},
#line 319 "mime.gperf"
    {"fzs", "application/vnd.fuzzysheet"},
#line 1048 "mime.gperf"
    {"spdx", "text/spdx"},
    {""}, {""},
#line 1079 "mime.gperf"
    {"cc", "text/x-c"},
    {""}, {""}, {""}, {""}, {""},
#line 1061 "mime.gperf"
    {"urls", "text/uri-list"},
    {""},
#line 784 "mime.gperf"
    {"src", "application/x-wais-source"},
    {""},
#line 572 "mime.gperf"
    {"sxc", "application/vnd.sun.xml.calc"},
#line 859 "mime.gperf"
    {"wav", "audio/x-wav"},
    {""},
#line 73 "mime.gperf"
    {"mrc", "application/marc"},
    {""}, {""},
#line 174 "mime.gperf"
    {"spp", "application/scvp-vp-response"},
#line 797 "mime.gperf"
    {"z5", "application/x-zmachine"},
    {""}, {""}, {""},
#line 456 "mime.gperf"
    {"mpp", "application/vnd.ms-project"},
    {""}, {""}, {""}, {""},
#line 367 "mime.gperf"
    {"xpx", "application/vnd.intercon.formnet"},
    {""},
#line 1044 "mime.gperf"
    {"sgm", "text/sgml"},
    {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 1106 "mime.gperf"
    {"vcf", "text/x-vcard"},
#line 798 "mime.gperf"
    {"z6", "application/x-zmachine"},
    {""}, {""}, {""}, {""},
#line 507 "mime.gperf"
    {"ppsx", "application/vnd.openxmlformats-officedocument.presentationml.slideshow"},
    {""}, {""}, {""},
#line 460 "mime.gperf"
    {"wps", "application/vnd.ms-works"},
#line 88 "mime.gperf"
    {"mp21", "application/mp21"},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 505 "mime.gperf"
    {"pptx", "application/vnd.openxmlformats-officedocument.presentationml.presentation"},
    {""}, {""}, {""}, {""},
#line 104 "mime.gperf"
    {"distz", "application/octet-stream"},
#line 716 "mime.gperf"
    {"prc", "application/x-pilot"},
    {""}, {""},
#line 617 "mime.gperf"
    {"wpd", "application/vnd.wordperfect"},
    {""},
#line 240 "mime.gperf"
    {"cdxml", "application/vnd.chemdraw+xml"},
    {""},
#line 1057 "mime.gperf"
    {"ms", "text/troff"},
#line 1119 "mime.gperf"
    {"mp4", "video/mp4"},
    {""},
#line 846 "mime.gperf"
    {"sil", "audio/silk"},
    {""}, {""},
#line 942 "mime.gperf"
    {"fpx", "image/vnd.fpx"},
    {""}, {""}, {""},
#line 1118 "mime.gperf"
    {"ts", "video/mp2t"},
#line 118 "mime.gperf"
    {"msm", "application/octet-stream"},
    {""},
#line 971 "mime.gperf"
    {"pgm", "image/x-portable-graymap"},
    {""},
#line 1024 "mime.gperf"
    {"shtml", "text/html"},
#line 628 "mime.gperf"
    {"spf", "application/vnd.yamaha.smaf-phrase"},
#line 800 "mime.gperf"
    {"z8", "application/x-zmachine"},
    {""}, {""}, {""},
#line 61 "mime.gperf"
    {"mjs", "application/javascript"},
    {""}, {""}, {""}, {""}, {""},
#line 799 "mime.gperf"
    {"z7", "application/x-zmachine"},
    {""}, {""}, {""},
#line 196 "mime.gperf"
    {"tsd", "application/timestamped-data"},
    {""}, {""},
#line 170 "mime.gperf"
    {"sbml", "application/sbml+xml"},
    {""},
#line 427 "mime.gperf"
    {"xul", "application/vnd.mozilla.xul+xml"},
    {""},
#line 314 "mime.gperf"
    {"fg5", "application/vnd.fujitsu.oasysgp"},
    {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 587 "mime.gperf"
    {"xsm", "application/vnd.syncml+xml"},
#line 801 "mime.gperf"
    {"xaml", "application/xaml+xml"},
    {""}, {""},
#line 149 "mime.gperf"
    {"ps", "application/postscript"},
#line 958 "mime.gperf"
    {"ras", "image/x-cmu-raster"},
    {""},
#line 753 "mime.gperf"
    {"ris", "application/x-research-info-systems"},
    {""},
#line 807 "mime.gperf"
    {"xhtml", "application/xhtml+xml"},
#line 811 "mime.gperf"
    {"xsd", "application/xml"},
    {""},
#line 679 "mime.gperf"
    {"fgd", "application/x-director"},
    {""}, {""},
#line 871 "mime.gperf"
    {"ram", "audio/x-pn-realaudio"},
    {""},
#line 513 "mime.gperf"
    {"mgp", "application/vnd.osgeo.mapguide.package"},
    {""}, {""},
#line 804 "mime.gperf"
    {"xel", "application/xcap-el+xml"},
#line 163 "mime.gperf"
    {"rusd", "application/route-usd+xml"},
    {""}, {""}, {""},
#line 930 "mime.gperf"
    {"psd", "image/vnd.adobe.photoshop"},
    {""},
#line 100 "mime.gperf"
    {"lrf", "application/octet-stream"},
    {""},
#line 824 "mime.gperf"
    {"zip", "application/zip"},
#line 684 "mime.gperf"
    {"res", "application/x-dtbresource+xml"},
    {""}, {""}, {""}, {""}, {""},
#line 794 "mime.gperf"
    {"z2", "application/x-zmachine"},
    {""}, {""}, {""},
#line 70 "mime.gperf"
    {"cpt", "application/mac-compactpro"},
    {""},
#line 909 "mime.gperf"
    {"jpm", "video/jpm"},
    {""}, {""},
#line 838 "mime.gperf"
    {"mp2", "audio/mpeg"},
#line 266 "mime.gperf"
    {"dart", "application/vnd.dart"},
    {""}, {""}, {""}, {""}, {""},
#line 1147 "mime.gperf"
    {"viv", "video/vnd.vivo"},
    {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 1002 "mime.gperf"
    {"x_t", "model/vnd.parasolid.transmit.text"},
    {""}, {""}, {""}, {""},
#line 117 "mime.gperf"
    {"msp", "application/octet-stream"},
    {""},
#line 132 "mime.gperf"
    {"pgp", "application/pgp-encrypted"},
    {""}, {""},
#line 943 "mime.gperf"
    {"fst", "image/vnd.fst"},
    {""},
#line 635 "mime.gperf"
    {"wgt", "application/widget"},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 161 "mime.gperf"
    {"rapd", "application/route-apd+xml"},
#line 961 "mime.gperf"
    {"fhc", "image/x-freehand"},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 1125 "mime.gperf"
    {"m1v", "video/mpeg"},
    {""}, {""}, {""}, {""}, {""},
#line 571 "mime.gperf"
    {"wadl", "application/vnd.sun.wadl+xml"},
#line 23 "mime.gperf"
    {"ccxml", "application/ccxml+xml"},
    {""}, {""},
#line 366 "mime.gperf"
    {"xpw", "application/vnd.intercon.formnet"},
    {""},
#line 910 "mime.gperf"
    {"jpx", "image/jpx"},
    {""}, {""}, {""}, {""},
#line 858 "mime.gperf"
    {"rip", "audio/vnd.rip"},
    {""}, {""},
#line 1081 "mime.gperf"
    {"cpp", "text/x-c"},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 293 "mime.gperf"
    {"ssf", "application/vnd.epson.ssf"},
    {""},
#line 889 "mime.gperf"
    {"cgm", "image/cgm"},
    {""}, {""},
#line 290 "mime.gperf"
    {"msf", "application/vnd.epson.msf"},
#line 1010 "mime.gperf"
    {"x3dv", "model/x3d-vrml"},
#line 916 "mime.gperf"
    {"jxsc", "image/jxsc"},
#line 1154 "mime.gperf"
    {"mk3d", "video/x-matroska"},
    {""},
#line 239 "mime.gperf"
    {"rep", "application/vnd.businessobjects"},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""},
#line 311 "mime.gperf"
    {"oas", "application/vnd.fujitsu.oasys"},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 1020 "mime.gperf"
    {"css", "text/css"},
    {""}, {""}, {""}, {""}, {""}, {""},
#line 428 "mime.gperf"
    {"cil", "application/vnd.ms-artgalry"},
    {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 690 "mime.gperf"
    {"psf", "application/x-font-linux-psf"},
    {""},
#line 156 "mime.gperf"
    {"rif", "application/reginfo+xml"},
    {""}, {""},
#line 97 "mime.gperf"
    {"cjs", "application/node"},
#line 60 "mime.gperf"
    {"js", "application/javascript"},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 675 "mime.gperf"
    {"cst", "application/x-director"},
    {""}, {""}, {""}, {""},
#line 957 "mime.gperf"
    {"3ds", "image/x-3ds"},
    {""},
#line 724 "mime.gperf"
    {"obd", "application/x-msbinder"},
    {""}, {""},
#line 648 "mime.gperf"
    {"aas", "application/x-authorware-seg"},
    {""},
#line 911 "mime.gperf"
    {"jpf", "image/jpx"},
    {""},
#line 75 "mime.gperf"
    {"ma", "application/mathematica"},
    {""}, {""}, {""}, {""}, {""},
#line 647 "mime.gperf"
    {"aam", "application/x-authorware-map"},
    {""}, {""}, {""}, {""},
#line 1116 "mime.gperf"
    {"mj2", "video/mj2"},
#line 817 "mime.gperf"
    {"xspf", "application/xspf+xml"},
    {""}, {""},
#line 389 "mime.gperf"
    {"kwd", "application/vnd.kde.kword"},
#line 749 "mime.gperf"
    {"spc", "application/x-pkcs7-certificates"},
#line 769 "mime.gperf"
    {"tk", "application/x-tcl"},
    {""}, {""},
#line 908 "mime.gperf"
    {"jhc", "image/jphc"},
#line 426 "mime.gperf"
    {"mpc", "application/vnd.mophun.certificate"},
    {""}, {""}, {""},
#line 390 "mime.gperf"
    {"kwt", "application/vnd.kde.kword"},
    {""}, {""},
#line 284 "mime.gperf"
    {"ait", "application/vnd.dvb.ait"},
    {""}, {""},
#line 608 "mime.gperf"
    {"vss", "application/vnd.visio"},
#line 827 "mime.gperf"
    {"au", "audio/basic"},
    {""}, {""},
#line 537 "mime.gperf"
    {"mxl", "application/vnd.recordare.musicxml"},
#line 768 "mime.gperf"
    {"tcl", "application/x-tcl"},
    {""}, {""}, {""}, {""},
#line 818 "mime.gperf"
    {"mxml", "application/xv+xml"},
    {""}, {""}, {""}, {""}, {""},
#line 793 "mime.gperf"
    {"z1", "application/x-zmachine"},
    {""}, {""}, {""},
#line 606 "mime.gperf"
    {"vsd", "application/vnd.visio"},
    {""}, {""}, {""}, {""}, {""}, {""},
#line 1026 "mime.gperf"
    {"jsx", "text/jsx"},
#line 79 "mime.gperf"
    {"mbox", "application/mbox"},
    {""},
#line 607 "mime.gperf"
    {"vst", "application/vnd.visio"},
    {""}, {""}, {""}, {""},
#line 253 "mime.gperf"
    {"csp", "application/vnd.commonspace"},
#line 1117 "mime.gperf"
    {"mjp2", "video/mj2"},
#line 902 "mime.gperf"
    {"jp2", "image/jp2"},
    {""}, {""},
#line 494 "mime.gperf"
    {"ods", "application/vnd.oasis.opendocument.spreadsheet"},
    {""}, {""}, {""},
#line 819 "mime.gperf"
    {"xhvml", "application/xv+xml"},
#line 351 "mime.gperf"
    {"pcl", "application/vnd.hp-pcl"},
    {""}, {""}, {""}, {""},
#line 497 "mime.gperf"
    {"odm", "application/vnd.oasis.opendocument.text-master"},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""},
#line 1053 "mime.gperf"
    {"tr", "text/troff"},
    {""}, {""}, {""},
#line 154 "mime.gperf"
    {"rdf", "application/rdf+xml"},
    {""}, {""}, {""}, {""},
#line 496 "mime.gperf"
    {"odt", "application/vnd.oasis.opendocument.text"},
    {""}, {""}, {""},
#line 570 "mime.gperf"
    {"sm", "application/vnd.stepmania.stepchart"},
    {""},
#line 558 "mime.gperf"
    {"sdkm", "application/vnd.solent.sdkm+xml"},
    {""}, {""}, {""},
#line 99 "mime.gperf"
    {"dms", "application/octet-stream"},
    {""}, {""}, {""}, {""}, {""},
#line 559 "mime.gperf"
    {"sdkd", "application/vnd.solent.sdkm+xml"},
#line 352 "mime.gperf"
    {"pclxl", "application/vnd.hp-pclxl"},
    {""}, {""}, {""}, {""},
#line 82 "mime.gperf"
    {"meta4", "application/metalink4+xml"},
    {""}, {""},
#line 241 "mime.gperf"
    {"mmd", "application/vnd.chipnuts.karaoke-mmd"},
    {""}, {""}, {""}, {""},
#line 235 "mime.gperf"
    {"aep", "application/vnd.audiograph"},
    {""}, {""}, {""}, {""}, {""}, {""},
#line 671 "mime.gperf"
    {"dgc", "application/x-dgc-compressed"},
    {""}, {""},
#line 232 "mime.gperf"
    {"pkpass", "application/vnd.apple.pkpass"},
    {""}, {""}, {""},
#line 874 "mime.gperf"
    {"xm", "audio/xm"},
#line 936 "mime.gperf"
    {"djvu", "image/vnd.djvu"},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""},
#line 561 "mime.gperf"
    {"sfs", "application/vnd.spotfire.sfs"},
#line 13 "mime.gperf"
    {"aw", "application/applixware"},
#line 745 "mime.gperf"
    {"pm", "application/x-perl"},
#line 759 "mime.gperf"
    {"sql", "application/x-sql"},
    {""}, {""}, {""}, {""}, {""}, {""},
#line 1006 "mime.gperf"
    {"wrl", "model/vrml"},
    {""}, {""}, {""}, {""},
#line 414 "mime.gperf"
    {"mfm", "application/vnd.mfmp"},
#line 722 "mime.gperf"
    {"xbap", "application/x-ms-xbap"},
    {""},
#line 214 "mime.gperf"
    {"fxpl", "application/vnd.adobe.fxp"},
    {""},
#line 862 "mime.gperf"
    {"aif", "audio/x-aiff"},
#line 400 "mime.gperf"
    {"lasxml", "application/vnd.las.las+xml"},
    {""},
#line 492 "mime.gperf"
    {"odp", "application/vnd.oasis.opendocument.presentation"},
    {""},
#line 771 "mime.gperf"
    {"tfm", "application/x-tex-tfm"},
    {""}, {""},
#line 1041 "mime.gperf"
    {"dsc", "text/prs.lines.tag"},
#line 34 "mime.gperf"
    {"dssc", "application/dssc+der"},
    {""}, {""}, {""}, {""},
#line 487 "mime.gperf"
    {"odft", "application/vnd.oasis.opendocument.formula-template"},
#line 165 "mime.gperf"
    {"mft", "application/rpki-manifest"},
    {""},
#line 304 "mime.gperf"
    {"fm", "application/vnd.framemaker"},
#line 312 "mime.gperf"
    {"oa2", "application/vnd.fujitsu.oasys2"},
    {""}, {""}, {""},
#line 1056 "mime.gperf"
    {"me", "text/troff"},
    {""},
#line 816 "mime.gperf"
    {"xslt", "application/xslt+xml"},
    {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 765 "mime.gperf"
    {"t3", "application/x-t3vm-image"},
#line 611 "mime.gperf"
    {"vsf", "application/vnd.vsf"},
    {""},
#line 521 "mime.gperf"
    {"ei6", "application/vnd.pg.osasli"},
    {""}, {""}, {""},
#line 300 "mime.gperf"
    {"seed", "application/vnd.fdsn.seed"},
    {""}, {""},
#line 599 "mime.gperf"
    {"ufd", "application/vnd.ufdl"},
#line 594 "mime.gperf"
    {"dmp", "application/vnd.tcpdump.pcap"},
    {""},
#line 695 "mime.gperf"
    {"pfm", "application/x-font-type1"},
#line 353 "mime.gperf"
    {"sfd-hdstx", "application/vnd.hydrostatix.sof-data"},
    {""}, {""},
#line 707 "mime.gperf"
    {"jardiff", "application/x-java-archive-diff"},
    {""}, {""}, {""},
#line 826 "mime.gperf"
    {"adp", "audio/adpcm"},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""},
#line 1160 "mime.gperf"
    {"wm", "video/x-ms-wm"},
    {""}, {""},
#line 143 "mime.gperf"
    {"crl", "application/pkix-crl"},
    {""}, {""},
#line 486 "mime.gperf"
    {"odf", "application/vnd.oasis.opendocument.formula"},
#line 1120 "mime.gperf"
    {"mp4v", "video/mp4"},
#line 929 "mime.gperf"
    {"tfx", "image/tiff-fx"},
    {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 720 "mime.gperf"
    {"wmd", "application/x-ms-wmd"},
    {""}, {""}, {""},
#line 503 "mime.gperf"
    {"oxt", "application/vnd.openofficeorg.extension"},
#line 310 "mime.gperf"
    {"fsc", "application/vnd.fsc.weblaunch"},
    {""}, {""},
#line 863 "mime.gperf"
    {"aiff", "audio/x-aiff"},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""},
#line 565 "mime.gperf"
    {"smf", "application/vnd.stardivision.math"},
    {""}, {""}, {""}, {""},
#line 555 "mime.gperf"
    {"mmf", "application/vnd.smaf"},
    {""},
#line 162 "mime.gperf"
    {"sls", "application/route-s-tsid+xml"},
    {""}, {""},
#line 128 "mime.gperf"
    {"oxps", "application/oxps"},
    {""},
#line 747 "mime.gperf"
    {"pfx", "application/x-pkcs12"},
    {""}, {""}, {""}, {""},
#line 1047 "mime.gperf"
    {"slm", "text/slim"},
    {""}, {""}, {""}, {""},
#line 640 "mime.gperf"
    {"abw", "application/x-abiword"},
    {""}, {""},
#line 480 "mime.gperf"
    {"edm", "application/vnd.novadigm.edm"},
    {""}, {""},
#line 453 "mime.gperf"
    {"sldm", "application/vnd.ms-powerpoint.slide.macroenabled.12"},
    {""},
#line 609 "mime.gperf"
    {"vsw", "application/vnd.visio"},
    {""}, {""}, {""}, {""},
#line 985 "mime.gperf"
    {"wsc", "message/vnd.wfa.wsc"},
    {""},
#line 292 "mime.gperf"
    {"slt", "application/vnd.epson.salt"},
    {""}, {""},
#line 1162 "mime.gperf"
    {"wmx", "video/x-ms-wmx"},
    {""},
#line 914 "mime.gperf"
    {"jxrs", "image/jxrs"},
    {""}, {""}, {""}, {""},
#line 430 "mime.gperf"
    {"xls", "application/vnd.ms-excel"},
#line 1007 "mime.gperf"
    {"vrml", "model/vrml"},
    {""},
#line 633 "mime.gperf"
    {"vxml", "application/voicexml+xml"},
    {""}, {""}, {""}, {""}, {""}, {""},
#line 431 "mime.gperf"
    {"xlm", "application/vnd.ms-excel"},
#line 438 "mime.gperf"
    {"xlsm", "application/vnd.ms-excel.sheet.macroenabled.12"},
    {""},
#line 1051 "mime.gperf"
    {"tsv", "text/tab-separated-values"},
    {""},
#line 146 "mime.gperf"
    {"pls", "application/pls+xml"},
    {""}, {""}, {""}, {""},
#line 551 "mime.gperf"
    {"iif", "application/vnd.shana.informed.interchange"},
#line 779 "mime.gperf"
    {"vbox", "application/x-virtualbox-vbox"},
    {""}, {""}, {""}, {""},
#line 439 "mime.gperf"
    {"xltm", "application/vnd.ms-excel.template.macroenabled.12"},
    {""},
#line 937 "mime.gperf"
    {"djv", "image/vnd.djvu"},
    {""},
#line 434 "mime.gperf"
    {"xlt", "application/vnd.ms-excel"},
    {""},
#line 208 "mime.gperf"
    {"acu", "application/vnd.acucobol"},
    {""}, {""},
#line 80 "mime.gperf"
    {"mscml", "application/mediaservercontrol+xml"},
    {""}, {""},
#line 698 "mime.gperf"
    {"spl", "application/x-futuresplash"},
#line 792 "mime.gperf"
    {"xz", "application/x-xz"},
    {""}, {""}, {""},
#line 900 "mime.gperf"
    {"ief", "image/ief"},
    {""}, {""}, {""}, {""},
#line 481 "mime.gperf"
    {"edx", "application/vnd.novadigm.edx"},
#line 639 "mime.gperf"
    {"7z", "application/x-7z-compressed"},
#line 662 "mime.gperf"
    {"cfs", "application/x-cfs-compressed"},
#line 506 "mime.gperf"
    {"sldx", "application/vnd.openxmlformats-officedocument.presentationml.slide"},
#line 1011 "mime.gperf"
    {"x3dvz", "model/x3d+vrml"},
#line 341 "mime.gperf"
    {"tpl", "application/vnd.groove-tool-template"},
    {""}, {""}, {""}, {""},
#line 584 "mime.gperf"
    {"svd", "application/vnd.svd"},
    {""}, {""},
#line 216 "mime.gperf"
    {"xfdf", "application/vnd.adobe.xfdf"},
    {""}, {""}, {""}, {""}, {""}, {""},
#line 291 "mime.gperf"
    {"qam", "application/vnd.epson.quickanime"},
    {""}, {""}, {""}, {""},
#line 959 "mime.gperf"
    {"cmx", "image/x-cmx"},
#line 204 "mime.gperf"
    {"tcap", "application/vnd.3gpp2.tcap"},
#line 280 "mime.gperf"
    {"mlp", "application/vnd.dolby.mlp"},
    {""}, {""},
#line 815 "mime.gperf"
    {"xpl", "application/xproc+xml"},
    {""},
#line 1136 "mime.gperf"
    {"uvs", "video/vnd.dece.sd"},
#line 509 "mime.gperf"
    {"xlsx", "application/vnd.openxmlformats-officedocument.spreadsheetml.sheet"},
#line 700 "mime.gperf"
    {"ulx", "application/x-glulx"},
    {""}, {""}, {""}, {""}, {""},
#line 821 "mime.gperf"
    {"xvm", "application/xv+xml"},
#line 479 "mime.gperf"
    {"rpss", "application/vnd.nokia.radio-presets"},
#line 1132 "mime.gperf"
    {"uvm", "video/vnd.dece.mobile"},
    {""}, {""},
#line 732 "mime.gperf"
    {"wmf", "image/wmf"},
    {""}, {""},
#line 510 "mime.gperf"
    {"xltx", "application/vnd.openxmlformats-officedocument.spreadsheetml.template"},
    {""},
#line 752 "mime.gperf"
    {"rpm", "application/x-redhat-package-manager"},
    {""},
#line 270 "mime.gperf"
    {"uvd", "application/vnd.dece.data"},
#line 382 "mime.gperf"
    {"chrt", "application/vnd.kde.kchart"},
#line 532 "mime.gperf"
    {"qwd", "application/vnd.quark.quarkxpress"},
#line 629 "mime.gperf"
    {"cmp", "application/vnd.yellowriver-custom-menu"},
    {""}, {""}, {""}, {""},
#line 861 "mime.gperf"
    {"aac", "audio/x-aac"},
    {""},
#line 272 "mime.gperf"
    {"uvt", "application/vnd.dece.ttml+xml"},
    {""},
#line 533 "mime.gperf"
    {"qwt", "application/vnd.quark.quarkxpress"},
    {""},
#line 592 "mime.gperf"
    {"pcap", "application/vnd.tcpdump.pcap"},
    {""}, {""}, {""},
#line 1016 "mime.gperf"
    {"ics", "text/calendar"},
#line 478 "mime.gperf"
    {"rpst", "application/vnd.nokia.radio-preset"},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 361 "mime.gperf"
    {"icm", "application/vnd.iccprofile"},
#line 774 "mime.gperf"
    {"obj", "model/obj"},
#line 1068 "mime.gperf"
    {"flx", "text/vnd.fmi.flexstor"},
    {""}, {""}, {""}, {""},
#line 358 "mime.gperf"
    {"irm", "application/vnd.ibm.rights-management"},
    {""}, {""},
#line 245 "mime.gperf"
    {"rp9", "application/vnd.cloanto.rp9"},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""},
#line 568 "mime.gperf"
    {"sgl", "application/vnd.stardivision.writer-global"},
    {""}, {""}, {""}, {""}, {""},
#line 1043 "mime.gperf"
    {"sgml", "text/sgml"},
#line 880 "mime.gperf"
    {"xyz", "chemical/x-xyz"},
#line 1141 "mime.gperf"
    {"fvt", "video/vnd.fvt"},
    {""},
#line 274 "mime.gperf"
    {"uvx", "application/vnd.dece.unspecified"},
    {""},
#line 482 "mime.gperf"
    {"ext", "application/vnd.novadigm.ext"},
    {""},
#line 1145 "mime.gperf"
    {"uvu", "video/vnd.uvvu.mp4"},
    {""}, {""},
#line 141 "mime.gperf"
    {"ac", "application/vnd.nokia.n-gage.ac+xml"},
#line 1060 "mime.gperf"
    {"uris", "text/uri-list"},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 464 "mime.gperf"
    {"wpl", "application/vnd.ms-wpl"},
    {""},
#line 790 "mime.gperf"
    {"xlf", "application/xliff+xml"},
    {""},
#line 1066 "mime.gperf"
    {"scurl", "text/vnd.curl.scurl"},
#line 483 "mime.gperf"
    {"odc", "application/vnd.oasis.opendocument.chart"},
#line 877 "mime.gperf"
    {"cmdf", "chemical/x-cmdf"},
    {""}, {""},
#line 1065 "mime.gperf"
    {"mcurl", "text/vnd.curl.mcurl"},
    {""}, {""},
#line 1134 "mime.gperf"
    {"uvp", "video/vnd.dece.pd"},
    {""},
#line 1064 "mime.gperf"
    {"dcurl", "text/vnd.curl.dcurl"},
    {""}, {""},
#line 524 "mime.gperf"
    {"plf", "application/vnd.pocketlearn"},
    {""}, {""}, {""}, {""},
#line 27 "mime.gperf"
    {"cdmid", "application/cdmi-domain"},
#line 864 "mime.gperf"
    {"aifc", "audio/x-aiff"},
#line 901 "mime.gperf"
    {"jls", "image/jls"},
#line 422 "mime.gperf"
    {"msl", "application/vnd.mobius.msl"},
#line 191 "mime.gperf"
    {"ssml", "application/ssml+xml"},
    {""}, {""}, {""},
#line 999 "mime.gperf"
    {"mts", "model/vnd.mts"},
#line 190 "mime.gperf"
    {"ssdl", "application/ssdl+xml"},
    {""}, {""}, {""},
#line 851 "mime.gperf"
    {"dts", "audio/vnd.dts"},
    {""}, {""}, {""},
#line 544 "mime.gperf"
    {"st", "application/vnd.sailingtracker.track"},
#line 1021 "mime.gperf"
    {"csv", "text/csv"},
    {""}, {""}, {""}, {""},
#line 575 "mime.gperf"
    {"std", "application/vnd.sun.xml.draw.template"},
    {""}, {""}, {""},
#line 210 "mime.gperf"
    {"acutc", "application/vnd.acucorp"},
    {""}, {""},
#line 828 "mime.gperf"
    {"snd", "audio/basic"},
    {""},
#line 350 "mime.gperf"
    {"jlt", "application/vnd.hp-jlyt"},
#line 813 "mime.gperf"
    {"dtd", "application/xml-dtd"},
    {""},
#line 372 "mime.gperf"
    {"irp", "application/vnd.irepository.package+xml"},
    {""},
#line 265 "mime.gperf"
    {"pcurl", "application/vnd.curl.pcurl"},
#line 810 "mime.gperf"
    {"xsl", "application/xml"},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 160 "mime.gperf"
    {"rs", "application/rls-services+xml"},
#line 168 "mime.gperf"
    {"rss", "application/rss+xml"},
    {""},
#line 805 "mime.gperf"
    {"xns", "application/xcap-ns+xml"},
    {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 1163 "mime.gperf"
    {"wvx", "video/x-ms-wvx"},
#line 153 "mime.gperf"
    {"raml", "application/raml+yaml"},
#line 268 "mime.gperf"
    {"uvf", "application/vnd.dece.data"},
    {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 167 "mime.gperf"
    {"rsd", "application/rsd+xml"},
    {""}, {""}, {""}, {""}, {""},
#line 1071 "mime.gperf"
    {"spot", "text/vnd.in3d.spot"},
#line 969 "mime.gperf"
    {"pnm", "image/x-portable-anymap"},
    {""}, {""},
#line 538 "mime.gperf"
    {"musicxml", "application/vnd.recordare.musicxml+xml"},
    {""},
#line 435 "mime.gperf"
    {"xlw", "application/vnd.ms-excel"},
    {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 728 "mime.gperf"
    {"bat", "application/x-msdownload"},
#line 77 "mime.gperf"
    {"mb", "application/mathematica"},
#line 726 "mime.gperf"
    {"clp", "application/x-msclip"},
    {""}, {""},
#line 219 "mime.gperf"
    {"azs", "application/vnd.airzip.filesecure.azs"},
    {""},
#line 710 "mime.gperf"
    {"latex", "application/x-latex"},
    {""},
#line 150 "mime.gperf"
    {"provx", "application/provenance+xml"},
#line 387 "mime.gperf"
    {"kpt", "application/vnd.kde.kpresenter"},
#line 602 "mime.gperf"
    {"umj", "application/vnd.umajin"},
    {""}, {""}, {""},
#line 536 "mime.gperf"
    {"bed", "application/vnd.realvnc.bed"},
    {""}, {""},
#line 663 "mime.gperf"
    {"chat", "application/x-chat"},
    {""},
#line 101 "mime.gperf"
    {"mar", "application/octet-stream"},
#line 1074 "mime.gperf"
    {"wmls", "text/vnd.wap.wmlscript"},
    {""},
#line 1045 "mime.gperf"
    {"shex", "text/shex"},
    {""}, {""}, {""},
#line 672 "mime.gperf"
    {"dir", "application/x-director"},
    {""}, {""},
#line 767 "mime.gperf"
    {"tar", "application/x-tar"},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 58 "mime.gperf"
    {"ser", "application/java-serialized-object"},
    {""},
#line 384 "mime.gperf"
    {"flw", "application/vnd.kde.kivio"},
    {""}, {""},
#line 766 "mime.gperf"
    {"gam", "application/x-tads"},
    {""},
#line 338 "mime.gperf"
    {"gim", "application/vnd.groove-identity-message"},
    {""}, {""},
#line 786 "mime.gperf"
    {"der", "application/x-x509-ca-cert"},
    {""}, {""}, {""}, {""},
#line 620 "mime.gperf"
    {"xar", "application/vnd.xara"},
    {""}, {""}, {""}, {""}, {""},
#line 637 "mime.gperf"
    {"wsdl", "application/wsdl+xml"},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 451 "mime.gperf"
    {"ppam", "application/vnd.ms-powerpoint.addin.macroenabled.12"},
    {""}, {""}, {""},
#line 1166 "mime.gperf"
    {"smv", "video/x-smv"},
    {""}, {""}, {""},
#line 530 "mime.gperf"
    {"qxd", "application/vnd.quark.quarkxpress"},
#line 130 "mime.gperf"
    {"xer", "application/xcap-error+xml"},
    {""}, {""},
#line 1111 "mime.gperf"
    {"h261", "video/h261"},
#line 1090 "mime.gperf"
    {"hbs", "text/x-handlebars-template"},
#line 750 "mime.gperf"
    {"p7r", "application/x-pkcs7-certreqresp"},
#line 659 "mime.gperf"
    {"cbz", "application/x-cbr"},
    {""},
#line 1137 "mime.gperf"
    {"uvvs", "video/vnd.dece.sd"},
#line 531 "mime.gperf"
    {"qxt", "application/vnd.quark.quarkxpress"},
    {""}, {""}, {""}, {""},
#line 979 "mime.gperf"
    {"u8msg", "message/global"},
#line 619 "mime.gperf"
    {"stf", "application/vnd.wt.stf"},
    {""},
#line 1109 "mime.gperf"
    {"3gp", "video/3gpp"},
#line 1133 "mime.gperf"
    {"uvvm", "video/vnd.dece.mobile"},
    {""},
#line 221 "mime.gperf"
    {"acc", "application/vnd.americandynamics.acc"},
#line 283 "mime.gperf"
    {"kpxx", "application/vnd.ds-keypoint"},
#line 692 "mime.gperf"
    {"snf", "application/x-font-snf"},
    {""}, {""},
#line 588 "mime.gperf"
    {"bdm", "application/vnd.syncml.dm+wbxml"},
    {""},
#line 697 "mime.gperf"
    {"arc", "application/x-freearc"},
#line 271 "mime.gperf"
    {"uvvd", "application/vnd.dece.data"},
#line 980 "mime.gperf"
    {"u8dsn", "message/global-delivery-status"},
#line 883 "mime.gperf"
    {"ttf", "font/ttf"},
    {""}, {""}, {""},
#line 981 "mime.gperf"
    {"u8mdn", "message/global-disposition-notification"},
    {""}, {""}, {""},
#line 273 "mime.gperf"
    {"uvvt", "application/vnd.dece.ttml+xml"},
    {""}, {""},
#line 744 "mime.gperf"
    {"pl", "application/x-perl"},
#line 26 "mime.gperf"
    {"cdmic", "application/cdmi-container"},
    {""}, {""},
#line 504 "mime.gperf"
    {"osm", "application/vnd.openstreetmap.data+xml"},
    {""}, {""}, {""}, {""},
#line 243 "mime.gperf"
    {"csl", "application/vnd.citationstyles.style+xml"},
    {""},
#line 1102 "mime.gperf"
    {"sfv", "text/x-sfv"},
#line 978 "mime.gperf"
    {"disposition-notification", "message/disposition-notification"},
    {""},
#line 121 "mime.gperf"
    {"opf", "application/oebps-package+xml"},
#line 879 "mime.gperf"
    {"csml", "chemical/x-csml"},
    {""}, {""}, {""},
#line 323 "mime.gperf"
    {"gex", "application/vnd.geometry-explorer"},
    {""}, {""}, {""},
#line 155 "mime.gperf"
    {"owl", "application/rdf+xml"},
#line 255 "mime.gperf"
    {"cmc", "application/vnd.cosmocaller"},
#line 1148 "mime.gperf"
    {"webm", "video/webm"},
#line 122 "mime.gperf"
    {"ogx", "application/ogg"},
    {""}, {""}, {""},
#line 642 "mime.gperf"
    {"arj", "application/x-arj"},
#line 433 "mime.gperf"
    {"xlc", "application/vnd.ms-excel"},
#line 825 "mime.gperf"
    {"3gpp", "video/3gpp"},
    {""},
#line 56 "mime.gperf"
    {"war", "application/java-archive"},
    {""}, {""},
#line 176 "mime.gperf"
    {"senmlx", "application/senml+xml"},
    {""}, {""}, {""}, {""}, {""}, {""},
#line 11 "mime.gperf"
    {"123", "application/vnd.lotus-1-2-3"},
    {""},
#line 423 "mime.gperf"
    {"plc", "application/vnd.mobius.plc"},
#line 275 "mime.gperf"
    {"uvvx", "application/vnd.dece.unspecified"},
    {""}, {""},
#line 1070 "mime.gperf"
    {"3dml", "text/vnd.in3d.3dml"},
#line 1146 "mime.gperf"
    {"uvvu", "video/vnd.uvvu.mp4"},
    {""}, {""},
#line 1077 "mime.gperf"
    {"asm", "text/x-asm"},
    {""}, {""}, {""}, {""},
#line 148 "mime.gperf"
    {"eps", "application/postscript"},
#line 1063 "mime.gperf"
    {"curl", "text/vnd.curl"},
#line 616 "mime.gperf"
    {"nbp", "application/vnd.wolfram.player"},
    {""}, {""},
#line 218 "mime.gperf"
    {"azf", "application/vnd.airzip.filesecure.azf"},
    {""}, {""}, {""}, {""},
#line 285 "mime.gperf"
    {"svc", "application/vnd.dvb.service"},
    {""}, {""}, {""}, {""},
#line 581 "mime.gperf"
    {"stw", "application/vnd.sun.xml.writer.template"},
    {""}, {""},
#line 1135 "mime.gperf"
    {"uvvp", "video/vnd.dece.pd"},
    {""}, {""}, {""},
#line 776 "mime.gperf"
    {"hdd", "application/x-virtualbox-hdd"},
    {""}, {""}, {""}, {""}, {""},
#line 86 "mime.gperf"
    {"mods", "application/mods+xml"},
    {""}, {""},
#line 711 "mime.gperf"
    {"luac", "application/x-lua-bytecode"},
    {""}, {""}, {""},
#line 1161 "mime.gperf"
    {"wmv", "video/x-ms-wmv"},
    {""},
#line 893 "mime.gperf"
    {"gif", "image/gif"},
    {""},
#line 872 "mime.gperf"
    {"ra", "audio/x-realaudio"},
#line 1013 "mime.gperf"
    {"x3dz", "model/x3d+xml"},
    {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 459 "mime.gperf"
    {"dotm", "application/vnd.ms-word.template.macroenabled.12"},
    {""}, {""}, {""},
#line 93 "mime.gperf"
    {"dot", "application/msword"},
#line 1113 "mime.gperf"
    {"h264", "video/h264"},
    {""},
#line 264 "mime.gperf"
    {"car", "application/vnd.curl.car"},
    {""},
#line 1110 "mime.gperf"
    {"3g2", "video/3gpp2"},
    {""}, {""},
#line 1075 "mime.gperf"
    {"vtt", "text/vtt"},
    {""},
#line 614 "mime.gperf"
    {"wmlsc", "application/vnd.wap.wmlscriptc"},
#line 472 "mime.gperf"
    {"nitf", "application/vnd.nitf"},
    {""},
#line 1158 "mime.gperf"
    {"asx", "video/x-ms-asf"},
#line 956 "mime.gperf"
    {"webp", "image/webp"},
#line 344 "mime.gperf"
    {"zmm", "application/vnd.handheld-entertainment+xml"},
    {""}, {""},
#line 388 "mime.gperf"
    {"ksp", "application/vnd.kde.kspread"},
    {""}, {""}, {""}, {""},
#line 853 "mime.gperf"
    {"lvp", "audio/vnd.lucent.voice"},
    {""},
#line 55 "mime.gperf"
    {"jar", "application/java-archive"},
    {""}, {""},
#line 142 "mime.gperf"
    {"cer", "application/pkix-cert"},
    {""},
#line 656 "mime.gperf"
    {"cbr", "application/x-cbr"},
    {""}, {""}, {""}, {""}, {""},
#line 269 "mime.gperf"
    {"uvvf", "application/vnd.dece.data"},
    {""},
#line 360 "mime.gperf"
    {"icc", "application/vnd.iccprofile"},
    {""}, {""},
#line 455 "mime.gperf"
    {"potm", "application/vnd.ms-powerpoint.template.macroenabled.12"},
    {""},
#line 688 "mime.gperf"
    {"bdf", "application/x-font-bdf"},
    {""},
#line 450 "mime.gperf"
    {"pot", "application/vnd.ms-powerpoint"},
    {""}, {""},
#line 1030 "mime.gperf"
    {"mml", "text/mathml"},
    {""}, {""},
#line 1019 "mime.gperf"
    {"litcoffee", "text/coffeescript"},
    {""},
#line 220 "mime.gperf"
    {"azw", "application/vnd.amazon.ebook"},
    {""},
#line 989 "mime.gperf"
    {"igs", "model/iges"},
    {""}, {""}, {""}, {""}, {""}, {""},
#line 1005 "mime.gperf"
    {"vtu", "model/vnd.vtu"},
#line 625 "mime.gperf"
    {"osf", "application/vnd.yamaha.openscoreformat"},
    {""},
#line 365 "mime.gperf"
    {"igm", "application/vnd.insors.igm"},
#line 512 "mime.gperf"
    {"dotx", "application/vnd.openxmlformats-officedocument.wordprocessingml.template"},
    {""}, {""}, {""}, {""}, {""}, {""},
#line 673 "mime.gperf"
    {"dcr", "application/x-director"},
    {""}, {""}, {""}, {""},
#line 326 "mime.gperf"
    {"g2w", "application/vnd.geoplan"},
    {""}, {""}, {""},
#line 674 "mime.gperf"
    {"dxr", "application/x-director"},
#line 809 "mime.gperf"
    {"xml", "text/xml"},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 376 "mime.gperf"
    {"rms", "application/vnd.jcp.javame.midlet-rms"},
    {""}, {""}, {""},
#line 541 "mime.gperf"
    {"rm", "application/vnd.rn-realmedia"},
#line 262 "mime.gperf"
    {"pml", "application/vnd.ctc-posml"},
#line 795 "mime.gperf"
    {"z3", "application/x-zmachine"},
    {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 37 "mime.gperf"
    {"es", "application/ecmascript"},
#line 591 "mime.gperf"
    {"tao", "application/vnd.tao.intent-module-archive"},
    {""},
#line 814 "mime.gperf"
    {"xop", "application/xop+xml"},
#line 508 "mime.gperf"
    {"potx", "application/vnd.openxmlformats-officedocument.presentationml.template"},
    {""},
#line 1157 "mime.gperf"
    {"asf", "video/x-ms-asf"},
    {""}, {""}, {""}, {""}, {""}, {""},
#line 1151 "mime.gperf"
    {"flv", "video/x-flv"},
#line 1107 "mime.gperf"
    {"yaml", "text/yaml"},
#line 325 "mime.gperf"
    {"gxt", "application/vnd.geonext"},
#line 573 "mime.gperf"
    {"stc", "application/vnd.sun.xml.calc.template"},
    {""}, {""}, {""}, {""}, {""}, {""},
#line 704 "mime.gperf"
    {"hdf", "application/x-hdf"},
    {""}, {""}, {""}, {""},
#line 416 "mime.gperf"
    {"igx", "application/vnd.micrografx.igx"},
    {""}, {""},
#line 881 "mime.gperf"
    {"ttc", "font/collection"},
    {""}, {""}, {""},
#line 1143 "mime.gperf"
    {"m4u", "video/vnd.mpegurl"},
    {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 1138 "mime.gperf"
    {"uvv", "video/vnd.dece.video"},
#line 621 "mime.gperf"
    {"xfdl", "application/vnd.xfdl"},
    {""},
#line 600 "mime.gperf"
    {"ufdl", "application/vnd.ufdl"},
    {""}, {""},
#line 251 "mime.gperf"
    {"c11amc", "application/vnd.cluetrust.cartomobile-config"},
    {""},
#line 952 "mime.gperf"
    {"vtf", "image/vnd.valve.source.texture"},
    {""}, {""}, {""}, {""},
#line 528 "mime.gperf"
    {"qps", "application/vnd.publishare-delta-tree"},
    {""}, {""}, {""}, {""},
#line 90 "mime.gperf"
    {"m4p", "application/mp4"},
    {""}, {""}, {""}, {""},
#line 682 "mime.gperf"
    {"ncx", "application/x-dtbncx+xml"},
    {""},
#line 420 "mime.gperf"
    {"mbk", "application/vnd.mobius.mbk"},
    {""}, {""}, {""}, {""},
#line 33 "mime.gperf"
    {"dbk", "application/docbook+xml"},
    {""}, {""},
#line 1073 "mime.gperf"
    {"wml", "text/vnd.wap.wml"},
    {""}, {""}, {""}, {""}, {""}, {""},
#line 727 "mime.gperf"
    {"com", "application/x-msdownload"},
    {""}, {""},
#line 840 "mime.gperf"
    {"m2a", "audio/mpeg"},
    {""}, {""}, {""}, {""},
#line 296 "mime.gperf"
    {"ez2", "application/vnd.ezpix-album"},
    {""},
#line 540 "mime.gperf"
    {"cod", "application/vnd.rim.cod"},
#line 458 "mime.gperf"
    {"docm", "application/vnd.ms-word.document.macroenabled.12"},
    {""},
#line 873 "mime.gperf"
    {"rmp", "audio/x-pn-realaudio-plugin"},
    {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 755 "mime.gperf"
    {"sh", "application/x-sh"},
    {""},
#line 303 "mime.gperf"
    {"ftc", "application/vnd.fluxtime.clip"},
    {""}, {""}, {""},
#line 680 "mime.gperf"
    {"swa", "application/x-director"},
#line 754 "mime.gperf"
    {"sea", "application/x-sea"},
    {""},
#line 308 "mime.gperf"
    {"fnc", "application/vnd.frogans.fnc"},
    {""}, {""},
#line 335 "mime.gperf"
    {"gqs", "application/vnd.grafeq"},
#line 546 "mime.gperf"
    {"sema", "application/vnd.sema"},
    {""}, {""}, {""}, {""},
#line 613 "mime.gperf"
    {"wmlc", "application/vnd.wap.wmlc"},
#line 867 "mime.gperf"
    {"mka", "audio/x-matroska"},
    {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 854 "mime.gperf"
    {"pya", "audio/vnd.ms-playready.media.pya"},
    {""},
#line 111 "mime.gperf"
    {"dll", "application/x-msdownload"},
    {""}, {""},
#line 336 "mime.gperf"
    {"gac", "application/vnd.groove-account"},
    {""}, {""},
#line 469 "mime.gperf"
    {"taglet", "application/vnd.mynfc"},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""},
#line 309 "mime.gperf"
    {"ltf", "application/vnd.frogans.ltf"},
    {""}, {""},
#line 764 "mime.gperf"
    {"sv4crc", "application/x-sv4crc"},
    {""},
#line 878 "mime.gperf"
    {"cml", "chemical/x-cml"},
    {""}, {""},
#line 19 "mime.gperf"
    {"held", "application/atsc-held+xml"},
    {""}, {""}, {""}, {""},
#line 511 "mime.gperf"
    {"docx", "application/vnd.openxmlformats-officedocument.wordprocessingml.document"},
#line 47 "mime.gperf"
    {"gxf", "application/gxf"},
    {""}, {""}, {""}, {""},
#line 177 "mime.gperf"
    {"sensmlx", "application/sensml+xml"},
#line 730 "mime.gperf"
    {"m13", "application/x-msmediaview"},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 289 "mime.gperf"
    {"esf", "application/vnd.epson.esf"},
    {""}, {""}, {""}, {""},
#line 247 "mime.gperf"
    {"c4d", "application/vnd.clonk.c4group"},
    {""}, {""}, {""}, {""}, {""}, {""},
#line 159 "mime.gperf"
    {"rld", "application/resource-lists-diff+xml"},
#line 960 "mime.gperf"
    {"fh", "image/x-freehand"},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""},
#line 740 "mime.gperf"
    {"nc", "application/x-netcdf"},
    {""},
#line 912 "mime.gperf"
    {"jxr", "image/jxr"},
    {""}, {""}, {""},
#line 563 "mime.gperf"
    {"sda", "application/vnd.stardivision.draw"},
#line 806 "mime.gperf"
    {"xenc", "application/xenc+xml"},
    {""}, {""}, {""}, {""}, {""},
#line 69 "mime.gperf"
    {"hqx", "application/mac-binhex40"},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 646 "mime.gperf"
    {"vox", "application/x-authorware-bin"},
    {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 898 "mime.gperf"
    {"hej2", "image/hej2k"},
    {""}, {""}, {""}, {""},
#line 986 "mime.gperf"
    {"3mf", "model/3mf"},
#line 527 "mime.gperf"
    {"mgz", "application/vnd.proteus.magazine"},
    {""}, {""}, {""}, {""},
#line 820 "mime.gperf"
    {"xvml", "application/xv+xml"},
    {""}, {""},
#line 250 "mime.gperf"
    {"c4u", "application/vnd.clonk.c4group"},
    {""},
#line 632 "mime.gperf"
    {"zaz", "application/vnd.zzazz.deck+xml"},
    {""}, {""}, {""},
#line 931 "mime.gperf"
    {"azv", "image/vnd.airzip.accelerator.azv"},
#line 147 "mime.gperf"
    {"ai", "application/postscript"},
#line 696 "mime.gperf"
    {"afm", "application/x-font-type1"},
    {""}, {""}, {""}, {""},
#line 337 "mime.gperf"
    {"ghf", "application/vnd.groove-help"},
#line 884 "mime.gperf"
    {"woff", "font/woff"},
    {""},
#line 133 "mime.gperf"
    {"asc", "application/pgp-signature"},
    {""},
#line 315 "mime.gperf"
    {"bh2", "application/vnd.fujitsu.oasysprs"},
    {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 249 "mime.gperf"
    {"c4p", "application/vnd.clonk.c4group"},
    {""}, {""}, {""}, {""},
#line 278 "mime.gperf"
    {"fe_launch", "application/vnd.denovo.fcselayout-link"},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 301 "mime.gperf"
    {"dataless", "application/vnd.fdsn.seed"},
    {""}, {""}, {""}, {""},
#line 334 "mime.gperf"
    {"gqf", "application/vnd.grafeq"},
    {""}, {""}, {""},
#line 885 "mime.gperf"
    {"woff2", "font/woff2"},
    {""}, {""},
#line 92 "mime.gperf"
    {"doc", "application/msword"},
    {""}, {""},
#line 327 "mime.gperf"
    {"g3w", "application/vnd.geospace"},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""},
#line 194 "mime.gperf"
    {"teicorpus", "application/tei+xml"},
#line 1127 "mime.gperf"
    {"ogv", "video/ogg"},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""},
#line 708 "mime.gperf"
    {"jnlp", "application/x-java-jnlp-file"},
    {""},
#line 657 "mime.gperf"
    {"cba", "application/x-cbr"},
    {""}, {""}, {""}, {""},
#line 1003 "mime.gperf"
    {"usdz", "model/vnd.usdz+zip"},
#line 1139 "mime.gperf"
    {"uvvv", "video/vnd.dece.video"},
    {""},
#line 373 "mime.gperf"
    {"xpr", "application/vnd.is-xpr"},
    {""},
#line 349 "mime.gperf"
    {"hps", "application/vnd.hp-hps"},
    {""}, {""},
#line 248 "mime.gperf"
    {"c4f", "application/vnd.clonk.c4group"},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""},
#line 355 "mime.gperf"
    {"afp", "application/vnd.ibm.modcap"},
    {""}, {""},
#line 442 "mime.gperf"
    {"ims", "application/vnd.ms-ims"},
    {""}, {""}, {""}, {""},
#line 447 "mime.gperf"
    {"stl", "model/stl"},
    {""}, {""}, {""}, {""},
#line 994 "mime.gperf"
    {"mtl", "model/mtl"},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 772 "mime.gperf"
    {"texinfo", "application/x-texinfo"},
#line 1058 "mime.gperf"
    {"ttl", "text/turtle"},
    {""},
#line 850 "mime.gperf"
    {"dra", "audio/vnd.dra"},
#line 993 "mime.gperf"
    {"silo", "model/mesh"},
    {""}, {""},
#line 198 "mime.gperf"
    {"ttml", "application/ttml+xml"},
#line 598 "mime.gperf"
    {"tra", "application/vnd.trueapp"},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""},
#line 46 "mime.gperf"
    {"gpx", "application/gpx+xml"},
    {""}, {""}, {""}, {""},
#line 803 "mime.gperf"
    {"xca", "application/xcap-caps+xml"},
    {""}, {""}, {""}, {""},
#line 950 "mime.gperf"
    {"npx", "image/vnd.net-fpx"},
#line 1095 "mime.gperf"
    {"opml", "text/x-opml"},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 841 "mime.gperf"
    {"m3a", "audio/mpeg"},
    {""}, {""}, {""},
#line 188 "mime.gperf"
    {"grxml", "application/srgs+xml"},
    {""}, {""},
#line 549 "mime.gperf"
    {"ifm", "application/vnd.shana.informed.formdata"},
#line 436 "mime.gperf"
    {"xlam", "application/vnd.ms-excel.addin.macroenabled.12"},
#line 630 "mime.gperf"
    {"zir", "application/vnd.zul"},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""},
#line 715 "mime.gperf"
    {"mie", "application/x-mie"},
#line 830 "mime.gperf"
    {"midi", "audio/midi"},
    {""},
#line 995 "mime.gperf"
    {"dae", "model/vnd.collada+xml"},
    {""},
#line 1129 "mime.gperf"
    {"mov", "video/quicktime"},
#line 984 "mime.gperf"
    {"mime", "message/rfc822"},
#line 233 "mime.gperf"
    {"swi", "application/vnd.aristanetworks.swi"},
    {""}, {""}, {""}, {""}, {""},
#line 834 "mime.gperf"
    {"mp3", "audio/mpeg"},
    {""}, {""}, {""}, {""},
#line 545 "mime.gperf"
    {"see", "application/vnd.seemail"},
    {""},
#line 322 "mime.gperf"
    {"ggt", "application/vnd.geogebra.tool"},
    {""},
#line 267 "mime.gperf"
    {"rdz", "application/vnd.data-vision.rdz"},
#line 193 "mime.gperf"
    {"tei", "application/tei+xml"},
    {""},
#line 1062 "mime.gperf"
    {"vcard", "text/vcard"},
    {""}, {""},
#line 207 "mime.gperf"
    {"imp", "application/vnd.accpac.simply.imp"},
    {""}, {""}, {""}, {""},
#line 1092 "mime.gperf"
    {"lua", "text/x-lua"},
    {""},
#line 1103 "mime.gperf"
    {"ymp", "text/x-suse-ymp"},
    {""},
#line 152 "mime.gperf"
    {"pskcxml", "application/pskc+xml"},
    {""}, {""}, {""}, {""}, {""},
#line 666 "mime.gperf"
    {"cco", "application/x-cocoa"},
#line 1121 "mime.gperf"
    {"mpg4", "video/mp4"},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 1042 "mime.gperf"
    {"rtx", "text/richtext"},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 654 "mime.gperf"
    {"bz2", "application/x-bzip2"},
#line 773 "mime.gperf"
    {"texi", "application/x-texinfo"},
#line 343 "mime.gperf"
    {"hal", "application/vnd.hal+xml"},
    {""},
#line 534 "mime.gperf"
    {"qxl", "application/vnd.quark.quarkxpress"},
    {""}, {""},
#line 145 "mime.gperf"
    {"pki", "application/pkixcmp"},
    {""}, {""},
#line 751 "mime.gperf"
    {"rar", "application/x-rar-compressed"},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 1004 "mime.gperf"
    {"bsp", "model/vnd.valve.source.compiled-map"},
    {""}, {""}, {""}, {""},
#line 78 "mime.gperf"
    {"mathml", "application/mathml+xml"},
    {""}, {""}, {""}, {""}, {""}, {""},
#line 178 "mime.gperf"
    {"setpay", "application/set-payment-initiation"},
    {""}, {""},
#line 1152 "mime.gperf"
    {"m4v", "video/x-m4v"},
    {""}, {""}, {""}, {""},
#line 733 "mime.gperf"
    {"emf", "image/emf"},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 948 "mime.gperf"
    {"mdi", "image/vnd.ms-modi"},
    {""},
#line 28 "mime.gperf"
    {"cdmio", "application/cdmi-object"},
#line 1046 "mime.gperf"
    {"slim", "text/slim"},
    {""},
#line 517 "mime.gperf"
    {"pqa", "application/vnd.palm"},
    {""}, {""}, {""}, {""}, {""},
#line 158 "mime.gperf"
    {"rl", "application/resource-lists+xml"},
    {""}, {""}, {""},
#line 495 "mime.gperf"
    {"ots", "application/vnd.oasis.opendocument.spreadsheet-template"},
#line 523 "mime.gperf"
    {"wg", "application/vnd.pmi.widget"},
#line 339 "mime.gperf"
    {"grv", "application/vnd.groove-injector"},
#line 1115 "mime.gperf"
    {"jpgm", "video/jpm"},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""},
#line 778 "mime.gperf"
    {"ovf", "application/x-virtualbox-ovf"},
    {""}, {""}, {""}, {""}, {""},
#line 12 "mime.gperf"
    {"ez", "application/andrew-inset"},
    {""}, {""}, {""},
#line 169 "mime.gperf"
    {"rtf", "text/rtf"},
    {""}, {""}, {""},
#line 59 "mime.gperf"
    {"class", "application/java-vm"},
#line 498 "mime.gperf"
    {"ott", "application/vnd.oasis.opendocument.text-template"},
    {""}, {""},
#line 259 "mime.gperf"
    {"clkt", "application/vnd.crick.clicker.template"},
    {""}, {""}, {""},
#line 25 "mime.gperf"
    {"cdmia", "application/cdmi-capability"},
    {""}, {""},
#line 997 "mime.gperf"
    {"gdl", "model/vnd.gdl"},
    {""},
#line 945 "mime.gperf"
    {"rlc", "image/vnd.fujixerox.edmics-rlc"},
    {""}, {""},
#line 1098 "mime.gperf"
    {"pde", "text/x-processing"},
    {""}, {""}, {""}, {""}, {""},
#line 982 "mime.gperf"
    {"u8hdr", "message/global-headers"},
    {""},
#line 1091 "mime.gperf"
    {"java", "text/x-java-source"},
    {""},
#line 1149 "mime.gperf"
    {"f4v", "video/x-f4v"},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 305 "mime.gperf"
    {"frame", "application/vnd.framemaker"},
    {""}, {""},
#line 224 "mime.gperf"
    {"cii", "application/vnd.anser-web-certificate-issue-initiation"},
    {""}, {""}, {""}, {""}, {""},
#line 256 "mime.gperf"
    {"clkx", "application/vnd.crick.clicker"},
    {""}, {""}, {""}, {""}, {""}, {""},
#line 689 "mime.gperf"
    {"gsf", "application/x-font-ghostscript"},
    {""}, {""},
#line 197 "mime.gperf"
    {"toml", "application/toml"},
    {""}, {""},
#line 68 "mime.gperf"
    {"lostxml", "application/lost+xml"},
    {""}, {""}, {""},
#line 405 "mime.gperf"
    {"nsf", "application/vnd.lotus-notes"},
    {""}, {""}, {""}, {""},
#line 919 "mime.gperf"
    {"ktx", "image/ktx"},
    {""}, {""}, {""}, {""},
#line 493 "mime.gperf"
    {"otp", "application/vnd.oasis.opendocument.presentation-template"},
    {""}, {""},
#line 258 "mime.gperf"
    {"clkp", "application/vnd.crick.clicker.palette"},
    {""}, {""}, {""}, {""},
#line 1025 "mime.gperf"
    {"jade", "text/jade"},
#line 185 "mime.gperf"
    {"rq", "application/sparql-query"},
#line 604 "mime.gperf"
    {"uoml", "application/vnd.uoml+xml"},
    {""}, {""}, {""}, {""},
#line 831 "mime.gperf"
    {"kar", "audio/midi"},
#line 20 "mime.gperf"
    {"rsat", "application/atsc-rsat+xml"},
    {""},
#line 282 "mime.gperf"
    {"dfac", "application/vnd.dreamfactory"},
    {""},
#line 226 "mime.gperf"
    {"atx", "application/vnd.antix.game-component"},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 364 "mime.gperf"
    {"ivu", "application/vnd.immervision-ivu"},
    {""}, {""},
#line 394 "mime.gperf"
    {"knp", "application/vnd.kinar"},
    {""},
#line 576 "mime.gperf"
    {"sxi", "application/vnd.sun.xml.impress"},
    {""}, {""},
#line 370 "mime.gperf"
    {"qfx", "application/vnd.intu.qfx"},
    {""}, {""}, {""}, {""},
#line 211 "mime.gperf"
    {"air", "application/vnd.adobe.air-application-installer-package+zip"},
    {""},
#line 775 "mime.gperf"
    {"ustar", "application/x-ustar"},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 182 "mime.gperf"
    {"sieve", "application/sieve"},
#line 363 "mime.gperf"
    {"ivp", "application/vnd.immervision-ivp"},
    {""},
#line 362 "mime.gperf"
    {"igl", "application/vnd.igloader"},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""},
#line 882 "mime.gperf"
    {"otf", "font/otf"},
    {""}, {""}, {""},
#line 1059 "mime.gperf"
    {"uri", "text/uri-list"},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 1009 "mime.gperf"
    {"x3dbz", "model/x3d+binary"},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""},
#line 796 "mime.gperf"
    {"z4", "application/x-zmachine"},
#line 404 "mime.gperf"
    {"pre", "application/vnd.lotus-freelance"},
    {""}, {""}, {""}, {""}, {""}, {""},
#line 242 "mime.gperf"
    {"cdy", "application/vnd.cinderella"},
    {""}, {""}, {""}, {""},
#line 721 "mime.gperf"
    {"wmz", "application/x-msmetafile"},
#line 54 "mime.gperf"
    {"its", "application/its+xml"},
    {""}, {""}, {""}, {""}, {""},
#line 836 "mime.gperf"
    {"mp4a", "audio/mp4"},
    {""},
#line 502 "mime.gperf"
    {"obgx", "application/vnd.openblox.game+xml"},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 67 "mime.gperf"
    {"lgr", "application/lgr+xml"},
    {""}, {""}, {""}, {""}, {""},
#line 903 "mime.gperf"
    {"jpg2", "image/jp2"},
    {""}, {""}, {""}, {""}, {""}, {""},
#line 313 "mime.gperf"
    {"oa3", "application/vnd.fujitsu.oasys3"},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 944 "mime.gperf"
    {"mmr", "image/vnd.fujixerox.edmics-mmr"},
    {""}, {""}, {""}, {""}, {""}, {""},
#line 974 "mime.gperf"
    {"tga", "image/x-tga"},
    {""}, {""}, {""},
#line 839 "mime.gperf"
    {"mp2a", "audio/mpeg"},
    {""}, {""}, {""},
#line 781 "mime.gperf"
    {"vdi", "application/x-virtualbox-vdi"},
#line 102 "mime.gperf"
    {"so", "application/octet-stream"},
    {""}, {""}, {""}, {""}, {""},
#line 739 "mime.gperf"
    {"wri", "application/x-mswrite"},
#line 260 "mime.gperf"
    {"clkw", "application/vnd.crick.clicker.wordbank"},
    {""}, {""},
#line 709 "mime.gperf"
    {"kdbx", "application/x-keepass2"},
#line 402 "mime.gperf"
    {"lbe", "application/vnd.llamagraphics.life-balance.exchange+xml"},
    {""}, {""}, {""}, {""},
#line 157 "mime.gperf"
    {"rnc", "application/relax-ng-compact-syntax"},
    {""},
#line 421 "mime.gperf"
    {"mqy", "application/vnd.mobius.mqy"},
    {""},
#line 529 "mime.gperf"
    {"ptid", "application/vnd.pvi.ptid1"},
#line 713 "mime.gperf"
    {"lha", "application/x-lzh-compressed"},
    {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 1101 "mime.gperf"
    {"etx", "text/x-setext"},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""},
#line 500 "mime.gperf"
    {"xo", "application/vnd.olpc-sugar"},
    {""}, {""}, {""},
#line 888 "mime.gperf"
    {"bmp", "image/x-ms-bmp"},
    {""}, {""}, {""}, {""},
#line 57 "mime.gperf"
    {"ear", "application/java-archive"},
#line 518 "mime.gperf"
    {"oprc", "application/vnd.palm"},
    {""}, {""}, {""},
#line 550 "mime.gperf"
    {"itp", "application/vnd.shana.informed.formtemplate"},
    {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 866 "mime.gperf"
    {"flac", "audio/x-flac"},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 328 "mime.gperf"
    {"gmx", "application/vnd.gmx"},
    {""},
#line 109 "mime.gperf"
    {"deploy", "application/octet-stream"},
    {""}, {""},
#line 667 "mime.gperf"
    {"nsc", "application/x-conference"},
    {""}, {""}, {""}, {""}, {""},
#line 557 "mime.gperf"
    {"fo", "application/vnd.software602.filler.form+xml"},
#line 43 "mime.gperf"
    {"pfr", "application/font-tdpfr"},
    {""},
#line 892 "mime.gperf"
    {"g3", "image/g3fax"},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 1032 "mime.gperf"
    {"n3", "text/n3"},
    {""}, {""}, {""},
#line 785 "mime.gperf"
    {"webapp", "application/x-web-app-manifest+json"},
    {""},
#line 332 "mime.gperf"
    {"kml", "application/vnd.google-earth.kml+xml"},
#line 276 "mime.gperf"
    {"uvz", "application/vnd.dece.zip"},
#line 917 "mime.gperf"
    {"jxsi", "image/jxsi"},
    {""}, {""}, {""}, {""}, {""},
#line 1054 "mime.gperf"
    {"roff", "text/troff"},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 231 "mime.gperf"
    {"pages", "application/vnd.apple.pages"},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""},
#line 108 "mime.gperf"
    {"elc", "application/octet-stream"},
    {""}, {""},
#line 899 "mime.gperf"
    {"hsj2", "image/hsj2"},
    {""},
#line 29 "mime.gperf"
    {"cdmiq", "application/cdmi-queue"},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 653 "mime.gperf"
    {"bz", "application/x-bzip"},
    {""}, {""}, {""},
#line 484 "mime.gperf"
    {"otc", "application/vnd.oasis.opendocument.chart-template"},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""},
#line 1128 "mime.gperf"
    {"qt", "video/quicktime"},
    {""}, {""}, {""},
#line 1000 "mime.gperf"
    {"ogex", "model/vnd.opengex"},
    {""}, {""}, {""}, {""}, {""}, {""},
#line 702 "mime.gperf"
    {"gramps", "application/x-gramps-xml"},
    {""}, {""},
#line 187 "mime.gperf"
    {"gram", "application/srgs"},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""},
#line 897 "mime.gperf"
    {"heifs", "image/heif-sequence"},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""},
#line 209 "mime.gperf"
    {"atc", "application/vnd.acucorp"},
    {""}, {""}, {""}, {""},
#line 1124 "mime.gperf"
    {"mpe", "video/mpeg"},
    {""}, {""}, {""},
#line 354 "mime.gperf"
    {"mpy", "application/vnd.ibm.minipay"},
    {""},
#line 48 "mime.gperf"
    {"gz", "application/gzip"},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""},
#line 306 "mime.gperf"
    {"maker", "application/vnd.framemaker"},
    {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 791 "mime.gperf"
    {"xpi", "application/x-xpinstall"},
    {""}, {""},
#line 144 "mime.gperf"
    {"pkipath", "application/pkix-pkipath"},
#line 631 "mime.gperf"
    {"zirz", "application/vnd.zul"},
    {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 440 "mime.gperf"
    {"eot", "application/vnd.ms-fontobject"},
    {""}, {""}, {""}, {""},
#line 392 "mime.gperf"
    {"kia", "application/vnd.kidspiration"},
#line 756 "mime.gperf"
    {"shar", "application/x-shar"},
    {""}, {""}, {""},
#line 252 "mime.gperf"
    {"c11amz", "application/vnd.cluetrust.cartomobile-config-pkg"},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 601 "mime.gperf"
    {"utz", "application/vnd.uiq.theme"},
    {""}, {""}, {""}, {""},
#line 470 "mime.gperf"
    {"nlu", "application/vnd.neurolanguage.nlu"},
    {""},
#line 890 "mime.gperf"
    {"drle", "image/dicom-rle"},
    {""}, {""}, {""},
#line 623 "mime.gperf"
    {"hvs", "application/vnd.yamaha.hv-script"},
    {""}, {""}, {""}, {""}, {""},
#line 896 "mime.gperf"
    {"heif", "image/heif"},
    {""}, {""}, {""}, {""}, {""}, {""},
#line 171 "mime.gperf"
    {"scq", "application/scvp-cv-request"},
    {""}, {""}, {""}, {""},
#line 595 "mime.gperf"
    {"tmo", "application/vnd.tmobile-livetv"},
#line 184 "mime.gperf"
    {"smil", "application/smil+xml"},
#line 622 "mime.gperf"
    {"hvd", "application/vnd.yamaha.hv-dic"},
#line 1114 "mime.gperf"
    {"jpgv", "video/jpeg"},
    {""},
#line 983 "mime.gperf"
    {"eml", "message/rfc822"},
    {""},
#line 1108 "mime.gperf"
    {"yml", "text/yaml"},
    {""}, {""}, {""}, {""},
#line 923 "mime.gperf"
    {"sgi", "image/sgi"},
    {""},
#line 636 "mime.gperf"
    {"hlp", "application/winhlp"},
#line 543 "mime.gperf"
    {"link66", "application/vnd.route66.link66+xml"},
    {""}, {""},
#line 990 "mime.gperf"
    {"iges", "model/iges"},
#line 569 "mime.gperf"
    {"smzip", "application/vnd.stepmania.package"},
    {""},
#line 857 "mime.gperf"
    {"ecelp9600", "audio/vnd.nuera.ecelp9600"},
    {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 895 "mime.gperf"
    {"heics", "image/heic-sequence"},
    {""}, {""},
#line 53 "mime.gperf"
    {"ipfix", "application/ipfix"},
    {""},
#line 886 "mime.gperf"
    {"exr", "image/aces"},
    {""}, {""}, {""}, {""}, {""}, {""},
#line 21 "mime.gperf"
    {"bdoc", "application/x-bdoc"},
    {""}, {""}, {""},
#line 1049 "mime.gperf"
    {"stylus", "text/stylus"},
#line 856 "mime.gperf"
    {"ecelp7470", "audio/vnd.nuera.ecelp7470"},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 120 "mime.gperf"
    {"oda", "application/oda"},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 116 "mime.gperf"
    {"msi", "application/x-msdownload"},
    {""}, {""}, {""}, {""},
#line 399 "mime.gperf"
    {"sse", "application/vnd.kodak-descriptor"},
    {""}, {""}, {""}, {""}, {""},
#line 855 "mime.gperf"
    {"ecelp4800", "audio/vnd.nuera.ecelp4800"},
    {""},
#line 987 "mime.gperf"
    {"gltf", "model/gltf+json"},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 299 "mime.gperf"
    {"mseed", "application/vnd.fdsn.mseed"},
    {""}, {""}, {""}, {""},
#line 624 "mime.gperf"
    {"hvp", "application/vnd.yamaha.hv-voice"},
    {""}, {""},
#line 468 "mime.gperf"
    {"msty", "application/vnd.muvee.style"},
#line 129 "mime.gperf"
    {"relo", "application/p2p-overlay+xml"},
    {""}, {""}, {""}, {""}, {""},
#line 277 "mime.gperf"
    {"uvvz", "application/vnd.dece.zip"},
    {""}, {""},
#line 520 "mime.gperf"
    {"str", "application/vnd.pg.format"},
#line 329 "mime.gperf"
    {"gdoc", "application/vnd.google-apps.document"},
    {""}, {""}, {""},
#line 938 "mime.gperf"
    {"sub", "text/vnd.dvb.subtitle"},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""},
#line 340 "mime.gperf"
    {"gtm", "application/vnd.groove-tool-message"},
    {""}, {""}, {""}, {""}, {""}, {""},
#line 474 "mime.gperf"
    {"nns", "application/vnd.noblenet-sealer"},
    {""}, {""}, {""}, {""}, {""}, {""},
#line 96 "mime.gperf"
    {"nt", "application/n-triples"},
#line 112 "mime.gperf"
    {"deb", "application/x-debian-package"},
    {""},
#line 906 "mime.gperf"
    {"jpe", "image/jpeg"},
    {""}, {""}, {""}, {""},
#line 1023 "mime.gperf"
    {"htm", "text/html"},
    {""}, {""}, {""}, {""},
#line 473 "mime.gperf"
    {"nnd", "application/vnd.noblenet-directory"},
    {""}, {""},
#line 736 "mime.gperf"
    {"pub", "application/x-mspublisher"},
    {""}, {""}, {""},
#line 852 "mime.gperf"
    {"dtshd", "audio/vnd.dts.hd"},
#line 386 "mime.gperf"
    {"kpr", "application/vnd.kde.kpresenter"},
    {""}, {""}, {""}, {""},
#line 81 "mime.gperf"
    {"metalink", "application/metalink+xml"},
#line 371 "mime.gperf"
    {"rcprofile", "application/vnd.ipunplugged.rcprofile"},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 748 "mime.gperf"
    {"p7b", "application/x-pkcs7-certificates"},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 403 "mime.gperf"
    {"apr", "application/vnd.lotus-approach"},
    {""},
#line 693 "mime.gperf"
    {"pfa", "application/x-font-type1"},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 556 "mime.gperf"
    {"teacher", "application/vnd.smart.teacher"},
    {""},
#line 76 "mime.gperf"
    {"nb", "application/mathematica"},
#line 123 "mime.gperf"
    {"omdoc", "application/omdoc+xml"},
    {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 870 "mime.gperf"
    {"wma", "audio/x-ms-wma"},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 1014 "mime.gperf"
    {"appcache", "text/cache-manifest"},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 723 "mime.gperf"
    {"mdb", "application/x-msaccess"},
    {""},
#line 134 "mime.gperf"
    {"sig", "application/pgp-signature"},
#line 894 "mime.gperf"
    {"heic", "image/heic"},
    {""},
#line 287 "mime.gperf"
    {"mag", "application/vnd.ecowin.chart"},
    {""},
#line 164 "mime.gperf"
    {"gbr", "application/rpki-ghostbusters"},
    {""},
#line 1069 "mime.gperf"
    {"gv", "text/vnd.graphviz"},
    {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 415 "mime.gperf"
    {"flo", "application/vnd.micrografx.flo"},
    {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 1055 "mime.gperf"
    {"man", "text/troff"},
    {""},
#line 1082 "mime.gperf"
    {"h", "text/x-c"},
    {""}, {""}, {""}, {""}, {""}, {""},
#line 939 "mime.gperf"
    {"dwg", "image/vnd.dwg"},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""},
#line 516 "mime.gperf"
    {"pdb", "application/x-pilot"},
    {""},
#line 369 "mime.gperf"
    {"qbo", "application/vnd.intu.qbo"},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 913 "mime.gperf"
    {"jxra", "image/jxra"},
    {""}, {""}, {""}, {""},
#line 432 "mime.gperf"
    {"xla", "application/vnd.ms-excel"},
    {""}, {""},
#line 471 "mime.gperf"
    {"ntf", "application/vnd.nitf"},
    {""}, {""}, {""}, {""},
#line 992 "mime.gperf"
    {"mesh", "model/mesh"},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 946 "mime.gperf"
    {"ico", "image/x-icon"},
    {""},
#line 105 "mime.gperf"
    {"pkg", "application/octet-stream"},
    {""},
#line 228 "mime.gperf"
    {"key", "application/vnd.apple.keynote"},
#line 429 "mime.gperf"
    {"cab", "application/vnd.ms-cab-compressed"},
    {""},
#line 789 "mime.gperf"
    {"fig", "application/x-xfig"},
#line 119 "mime.gperf"
    {"buffer", "application/octet-stream"},
    {""},
#line 173 "mime.gperf"
    {"spq", "application/scvp-vp-request"},
#line 783 "mime.gperf"
    {"vmdk", "application/x-virtualbox-vmdk"},
    {""}, {""},
#line 205 "mime.gperf"
    {"pwn", "application/vnd.3m.post-it-notes"},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""},
#line 476 "mime.gperf"
    {"ngdat", "application/vnd.nokia.n-gage.data"},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""},
#line 463 "mime.gperf"
    {"wdb", "application/vnd.ms-works"},
    {""}, {""},
#line 72 "mime.gperf"
    {"webmanifest", "application/manifest+json"},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 847 "mime.gperf"
    {"uva", "audio/vnd.dece.audio"},
    {""}, {""},
#line 490 "mime.gperf"
    {"odi", "application/vnd.oasis.opendocument.image"},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 998 "mime.gperf"
    {"gtw", "model/vnd.gtw"},
    {""}, {""}, {""},
#line 95 "mime.gperf"
    {"nq", "application/n-quads"},
    {""}, {""}, {""},
#line 1112 "mime.gperf"
    {"h263", "video/h263"},
    {""}, {""}, {""},
#line 526 "mime.gperf"
    {"box", "application/vnd.previewsystems.box"},
    {""}, {""}, {""}, {""},
#line 475 "mime.gperf"
    {"nnw", "application/vnd.noblenet-web"},
    {""}, {""},
#line 183 "mime.gperf"
    {"smi", "application/smil+xml"},
#line 236 "mime.gperf"
    {"bmml", "application/vnd.balsamiq.bmml+xml"},
    {""},
#line 348 "mime.gperf"
    {"hpid", "application/vnd.hp-hpid"},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 1050 "mime.gperf"
    {"styl", "text/stylus"},
    {""}, {""},
#line 36 "mime.gperf"
    {"ecma", "application/ecmascript"},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 780 "mime.gperf"
    {"vbox-extpack", "application/x-virtualbox-vbox-extpack"},
    {""}, {""}, {""}, {""},
#line 706 "mime.gperf"
    {"install", "application/x-install-instructions"},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 50 "mime.gperf"
    {"stk", "application/hyperstudio"},
    {""}, {""}, {""}, {""}, {""}, {""},
#line 1087 "mime.gperf"
    {"for", "text/x-fortran"},
    {""}, {""}, {""},
#line 14 "mime.gperf"
    {"atom", "application/atom+xml"},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 45 "mime.gperf"
    {"gml", "application/gml+xml"},
    {""}, {""}, {""}, {""}, {""}, {""},
#line 244 "mime.gperf"
    {"cla", "application/vnd.claymore"},
    {""}, {""},
#line 288 "mime.gperf"
    {"nml", "application/vnd.enliven"},
#line 1008 "mime.gperf"
    {"x3db", "model/x3d+fastinfoset"},
#line 195 "mime.gperf"
    {"tfi", "application/thraud+xml"},
    {""}, {""}, {""},
#line 84 "mime.gperf"
    {"maei", "application/mmt-aei+xml"},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 333 "mime.gperf"
    {"kmz", "application/vnd.google-earth.kmz"},
#line 297 "mime.gperf"
    {"ez3", "application/vnd.ezpix-package"},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""},
#line 279 "mime.gperf"
    {"dna", "application/vnd.dna"},
    {""},
#line 580 "mime.gperf"
    {"sxg", "application/vnd.sun.xml.writer.global"},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""},
#line 217 "mime.gperf"
    {"ahead", "application/vnd.ahead.space"},
#line 223 "mime.gperf"
    {"apk", "application/vnd.android.package-archive"},
    {""}, {""}, {""}, {""},
#line 286 "mime.gperf"
    {"geo", "application/vnd.dynageo"},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 64 "mime.gperf"
    {"json5", "application/json5"},
    {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 1085 "mime.gperf"
    {"htc", "text/x-component"},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""},
#line 66 "mime.gperf"
    {"jsonld", "application/ld+json"},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 641 "mime.gperf"
    {"ace", "application/x-ace-compressed"},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 412 "mime.gperf"
    {"cdkey", "application/vnd.mediastation.cdkey"},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""},
#line 206 "mime.gperf"
    {"aso", "application/vnd.accpac.simply.aso"},
    {""},
#line 842 "mime.gperf"
    {"oga", "audio/ogg"},
#line 522 "mime.gperf"
    {"efif", "application/vnd.picsel"},
    {""}, {""}, {""}, {""}, {""}, {""},
#line 1083 "mime.gperf"
    {"hh", "text/x-c"},
    {""},
#line 567 "mime.gperf"
    {"vor", "application/vnd.stardivision.writer"},
    {""}, {""},
#line 294 "mime.gperf"
    {"es3", "application/vnd.eszigno3+xml"},
    {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 848 "mime.gperf"
    {"uvva", "audio/vnd.dece.audio"},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""},
#line 685 "mime.gperf"
    {"dvi", "application/x-dvi"},
    {""},
#line 1150 "mime.gperf"
    {"fli", "video/x-fli"},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 849 "mime.gperf"
    {"eol", "audio/vnd.digital-winds"},
    {""}, {""}, {""},
#line 1067 "mime.gperf"
    {"fly", "text/vnd.fly"},
    {""}, {""},
#line 734 "mime.gperf"
    {"emz", "application/x-msmetafile"},
    {""}, {""}, {""}, {""}, {""},
#line 552 "mime.gperf"
    {"ipk", "application/vnd.shana.informed.package"},
    {""}, {""}, {""}, {""}, {""}, {""},
#line 932 "mime.gperf"
    {"uvi", "image/vnd.dece.graphic"},
    {""}, {""}, {""},
#line 860 "mime.gperf"
    {"weba", "audio/webm"},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""},
#line 254 "mime.gperf"
    {"cdbcmsg", "application/vnd.contact.cmsg"},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""},
#line 763 "mime.gperf"
    {"sv4cpio", "application/x-sv4cpio"},
#line 126 "mime.gperf"
    {"onetmp", "application/onenote"},
    {""}, {""}, {""}, {""},
#line 1167 "mime.gperf"
    {"ice", "x-conference/x-cooltalk"},
    {""}, {""}, {""},
#line 41 "mime.gperf"
    {"exi", "application/exi"},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 110 "mime.gperf"
    {"exe", "application/x-msdownload"},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 1035 "mime.gperf"
    {"conf", "text/plain"},
    {""}, {""}, {""}, {""}, {""}, {""},
#line 342 "mime.gperf"
    {"vcg", "application/vnd.groove-vcard"},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""},
#line 114 "mime.gperf"
    {"iso", "application/x-iso9660-image"},
    {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 192 "mime.gperf"
    {"swidtag", "application/swid+xml"},
    {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 539 "mime.gperf"
    {"cryptonote", "application/vnd.rig.cryptonote"},
    {""}, {""}, {""},
#line 577 "mime.gperf"
    {"sti", "application/vnd.sun.xml.impress.template"},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""},
#line 719 "mime.gperf"
    {"lnk", "application/x-ms-shortcut"},
    {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 1123 "mime.gperf"
    {"mpg", "video/mpeg"},
    {""}, {""}, {""}, {""},
#line 281 "mime.gperf"
    {"dpg", "application/vnd.dpgraph"},
#line 735 "mime.gperf"
    {"mny", "application/x-msmoney"},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 835 "mime.gperf"
    {"m4a", "audio/x-m4a"},
    {""}, {""}, {""}, {""},
#line 425 "mime.gperf"
    {"mpn", "application/vnd.mophun.application"},
#line 668 "mime.gperf"
    {"cpio", "application/x-cpio"},
    {""}, {""}, {""}, {""}, {""}, {""},
#line 718 "mime.gperf"
    {"application", "application/x-ms-application"},
    {""}, {""}, {""}, {""}, {""}, {""},
#line 922 "mime.gperf"
    {"pti", "image/prs.pti"},
    {""}, {""}, {""}, {""},
#line 699 "mime.gperf"
    {"gca", "application/x-gca-compressed"},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""},
#line 515 "mime.gperf"
    {"esa", "application/vnd.osgi.subsystem"},
    {""}, {""},
#line 1022 "mime.gperf"
    {"html", "text/html"},
    {""},
#line 225 "mime.gperf"
    {"fti", "application/vnd.anser-web-funds-transfer-initiation"},
    {""}, {""}, {""},
#line 379 "mime.gperf"
    {"ktz", "application/vnd.kahootz"},
    {""}, {""}, {""}, {""}, {""},
#line 202 "mime.gperf"
    {"psb", "application/vnd.3gpp.pic-bw-small"},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""},
#line 1001 "mime.gperf"
    {"x_b", "model/vnd.parasolid.transmit.binary"},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 17 "mime.gperf"
    {"atomsvc", "application/atomsvc+xml"},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""},
#line 125 "mime.gperf"
    {"onetoc2", "application/onenote"},
    {""}, {""}, {""},
#line 1015 "mime.gperf"
    {"manifest", "text/cache-manifest"},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""},
#line 649 "mime.gperf"
    {"bcpio", "application/x-bcpio"},
#line 933 "mime.gperf"
    {"uvvi", "image/vnd.dece.graphic"},
    {""}, {""}, {""}, {""}, {""},
#line 230 "mime.gperf"
    {"numbers", "application/vnd.apple.numbers"},
#line 445 "mime.gperf"
    {"msg", "application/vnd.ms-outlook"},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 378 "mime.gperf"
    {"joda", "application/vnd.joost.joda-archive"},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""},
#line 664 "mime.gperf"
    {"pgn", "application/x-chess-pgn"},
    {""}, {""}, {""}, {""},
#line 383 "mime.gperf"
    {"kfo", "application/vnd.kde.kformula"},
    {""}, {""}, {""}, {""}, {""}, {""},
#line 52 "mime.gperf"
    {"inkml", "application/inkml+xml"},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 991 "mime.gperf"
    {"msh", "model/mesh"},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""},
#line 714 "mime.gperf"
    {"run", "application/x-makeself"},
    {""}, {""}, {""}, {""},
#line 124 "mime.gperf"
    {"onetoc", "application/onenote"},
    {""}, {""}, {""}, {""}, {""}, {""},
#line 905 "mime.gperf"
    {"jpg", "image/jpeg"},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""},
#line 380 "mime.gperf"
    {"ktr", "application/vnd.kahootz"},
    {""}, {""},
#line 179 "mime.gperf"
    {"setreg", "application/set-registration-initiation"},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 106 "mime.gperf"
    {"bpk", "application/octet-stream"},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""},
#line 907 "mime.gperf"
    {"jph", "image/jph"},
    {""}, {""}, {""},
#line 643 "mime.gperf"
    {"aab", "application/x-authorware-bin"},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""},
#line 485 "mime.gperf"
    {"odb", "application/vnd.oasis.opendocument.database"},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 701 "mime.gperf"
    {"gnumeric", "application/x-gnumeric"},
#line 345 "mime.gperf"
    {"hbci", "application/vnd.hbci"},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 638 "mime.gperf"
    {"wspolicy", "application/wspolicy+xml"},
    {""}, {""},
#line 832 "mime.gperf"
    {"rmi", "audio/midi"},
#line 837 "mime.gperf"
    {"mpga", "audio/mpeg"},
    {""}, {""}, {""}, {""}, {""},
#line 324 "mime.gperf"
    {"gre", "application/vnd.geometry-explorer"},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""},
#line 669 "mime.gperf"
    {"csh", "application/x-csh"},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""},
#line 712 "mime.gperf"
    {"lzh", "application/x-lzh-compressed"},
    {""},
#line 38 "mime.gperf"
    {"emma", "application/emma+xml"},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""},
#line 777 "mime.gperf"
    {"ova", "application/x-virtualbox-ova"},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""},
#line 1039 "mime.gperf"
    {"in", "text/plain"},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 488 "mime.gperf"
    {"odg", "application/vnd.oasis.opendocument.graphics"},
    {""}, {""}, {""}, {""},
#line 65 "mime.gperf"
    {"jsonml", "application/jsonml+json"},
    {""}, {""}, {""}, {""}, {""}, {""},
#line 694 "mime.gperf"
    {"pfb", "application/x-font-type1"},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 113 "mime.gperf"
    {"dmg", "application/x-apple-diskimage"},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""},
#line 1028 "mime.gperf"
    {"markdown", "text/markdown"},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 1165 "mime.gperf"
    {"movie", "video/x-sgi-movie"},
    {""}, {""}, {""}, {""}, {""},
#line 199 "mime.gperf"
    {"rsheet", "application/urc-ressheet+xml"},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 368 "mime.gperf"
    {"i2g", "application/vnd.intergeo"},
#line 921 "mime.gperf"
    {"btif", "image/prs.btif"},
    {""}, {""}, {""}, {""}, {""}, {""},
#line 257 "mime.gperf"
    {"clkk", "application/vnd.crick.clicker.keyboard"},
    {""},
#line 925 "mime.gperf"
    {"svgz", "image/svg+xml"},
    {""}, {""}, {""}, {""},
#line 222 "mime.gperf"
    {"ami", "application/vnd.amiga.ami"},
    {""}, {""}, {""}, {""},
#line 295 "mime.gperf"
    {"et3", "application/vnd.eszigno3+xml"},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 603 "mime.gperf"
    {"unityweb", "application/vnd.unity"},
    {""}, {""}, {""}, {""},
#line 823 "mime.gperf"
    {"yin", "application/yin+xml"},
    {""}, {""}, {""},
#line 437 "mime.gperf"
    {"xlsb", "application/vnd.ms-excel.sheet.binary.macroenabled.12"},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 670 "mime.gperf"
    {"udeb", "application/x-debian-package"},
    {""}, {""}, {""},
#line 201 "mime.gperf"
    {"plb", "application/vnd.3gpp.pic-bw-large"},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""},
#line 406 "mime.gperf"
    {"org", "text/x-org"},
    {""}, {""}, {""}, {""}, {""}, {""},
#line 15 "mime.gperf"
    {"atomcat", "application/atomcat+xml"},
#line 729 "mime.gperf"
    {"mvb", "application/x-msmediaview"},
    {""}, {""}, {""}, {""},
#line 1140 "mime.gperf"
    {"dvb", "video/vnd.dvb.file"},
    {""}, {""}, {""}, {""},
#line 1018 "mime.gperf"
    {"coffee", "text/coffeescript"},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""},
#line 687 "mime.gperf"
    {"eva", "application/x-eva"},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""},
#line 203 "mime.gperf"
    {"pvb", "application/vnd.3gpp.pic-bw-var"},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 39 "mime.gperf"
    {"emotionml", "application/emotionml+xml"},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""},
#line 166 "mime.gperf"
    {"roa", "application/rpki-roa"},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 924 "mime.gperf"
    {"svg", "image/svg+xml"},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""},
#line 347 "mime.gperf"
    {"hpgl", "application/vnd.hp-hpgl"},
    {""}, {""}, {""},
#line 51 "mime.gperf"
    {"ink", "application/inkml+xml"},
    {""}, {""}, {""}, {""},
#line 973 "mime.gperf"
    {"rgb", "image/x-rgb"},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 934 "mime.gperf"
    {"uvg", "image/vnd.dece.graphic"},
    {""}, {""},
#line 683 "mime.gperf"
    {"dtb", "application/x-dtbook+xml"},
    {""}, {""},
#line 16 "mime.gperf"
    {"atomdeleted", "application/atomdeleted+xml"},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 466 "mime.gperf"
    {"mseq", "application/vnd.mseq"},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 1164 "mime.gperf"
    {"avi", "video/x-msvideo"},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""},
#line 1130 "mime.gperf"
    {"uvh", "video/vnd.dece.hd"},
    {""}, {""}, {""}, {""}, {""},
#line 1094 "mime.gperf"
    {"nfo", "text/x-nfo"},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""},
#line 615 "mime.gperf"
    {"wtb", "application/vnd.webturbo"},
    {""},
#line 1156 "mime.gperf"
    {"mng", "video/x-mng"},
    {""},
#line 535 "mime.gperf"
    {"qxb", "application/vnd.quark.quarkxpress"},
    {""},
#line 655 "mime.gperf"
    {"boz", "application/x-bzip2"},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 491 "mime.gperf"
    {"oti", "application/vnd.oasis.opendocument.image-template"},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 920 "mime.gperf"
    {"png", "image/png"},
    {""}, {""}, {""}, {""},
#line 393 "mime.gperf"
    {"kne", "application/vnd.kinar"},
    {""}, {""}, {""},
#line 227 "mime.gperf"
    {"mpkg", "application/vnd.apple.installer+xml"},
    {""}, {""}, {""}, {""}, {""},
#line 98 "mime.gperf"
    {"bin", "application/octet-stream"},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""},
#line 686 "mime.gperf"
    {"evy", "application/x-envoy"},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 843 "mime.gperf"
    {"ogg", "audio/ogg"},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""},
#line 935 "mime.gperf"
    {"uvvg", "image/vnd.dece.graphic"},
    {""}, {""}, {""}, {""},
#line 40 "mime.gperf"
    {"epub", "application/epub+zip"},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""},
#line 234 "mime.gperf"
    {"iota", "application/vnd.astraea-software.iota"},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 1131 "mime.gperf"
    {"uvvh", "video/vnd.dece.hd"},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 238 "mime.gperf"
    {"bmi", "application/vnd.bmi"},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""},
#line 965 "mime.gperf"
    {"jng", "image/x-jng"},
    {""}, {""},
#line 1040 "mime.gperf"
    {"ini", "text/plain"},
    {""},
#line 49 "mime.gperf"
    {"hjson", "application/hjson"},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 1122 "mime.gperf"
    {"mpeg", "video/mpeg"},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""},
#line 650 "mime.gperf"
    {"torrent", "application/x-bittorrent"},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""},
#line 330 "mime.gperf"
    {"gslides", "application/vnd.google-apps.presentation"},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 626 "mime.gperf"
    {"osfpvg", "application/vnd.yamaha.openscoreformat.osfpvg+xml"},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""},
#line 1159 "mime.gperf"
    {"vob", "video/x-ms-vob"},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""},
#line 62 "mime.gperf"
    {"json", "application/json"},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 331 "mime.gperf"
    {"gsheet", "application/vnd.google-apps.spreadsheet"},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 904 "mime.gperf"
    {"jpeg", "image/jpeg"},
    {""}, {""},
#line 409 "mime.gperf"
    {"portpkg", "application/vnd.macports.portpkg"},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""},
#line 542 "mime.gperf"
    {"rmvb", "application/vnd.rn-realmedia-vbr"},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""},
#line 246 "mime.gperf"
    {"c4g", "application/vnd.clonk.c4group"},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 743 "mime.gperf"
    {"nzb", "application/x-nzb"},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""},
#line 1038 "mime.gperf"
    {"log", "text/plain"},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 44 "mime.gperf"
    {"geojson", "application/geo+json"},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""},
#line 1017 "mime.gperf"
    {"ifb", "text/calendar"},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""},
#line 321 "mime.gperf"
    {"ggb", "application/vnd.geogebra.file"},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""},
#line 115 "mime.gperf"
    {"img", "application/octet-stream"},
    {""}, {""}, {""},
#line 302 "mime.gperf"
    {"gph", "application/vnd.flographit"},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""},
#line 812 "mime.gperf"
    {"rng", "application/xml"},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""},
#line 717 "mime.gperf"
    {"mobi", "application/x-mobipocket-ebook"},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""},
#line 489 "mime.gperf"
    {"otg", "application/vnd.oasis.opendocument.graphics-template"},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""},
#line 703 "mime.gperf"
    {"gtar", "application/x-gtar"},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""},
#line 499 "mime.gperf"
    {"oth", "application/vnd.oasis.opendocument.text-web"},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""},
#line 651 "mime.gperf"
    {"blb", "application/x-blorb"},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 385 "mime.gperf"
    {"kon", "application/vnd.kde.kontour"},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 988 "mime.gperf"
    {"glb", "model/gltf-binary"},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 822 "mime.gperf"
    {"yang", "application/yang"},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""},
#line 652 "mime.gperf"
    {"blorb", "application/x-blorb"},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""},
#line 307 "mime.gperf"
    {"book", "application/vnd.framemaker"},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 391 "mime.gperf"
    {"htke", "application/vnd.kenameaapp"},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 887 "mime.gperf"
    {"apng", "image/apng"},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""},
#line 477 "mime.gperf"
    {"n-gage", "application/vnd.nokia.n-gage.symbian.install"},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 381 "mime.gperf"
    {"karbon", "application/vnd.kde.karbon"},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 127 "mime.gperf"
    {"onepkg", "application/onenote"}
  };

const struct Mime__pair *
Mime__gperf_lookup (register const char *str, register size_t len)
{
  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      register unsigned int key = Mime__gperf_hash (str, len);

      if (key <= MAX_HASH_VALUE)
        {
          register const char *s = Mime__gperf_wordlist[key].ext;

          if (*str == *s && !strcmp (str + 1, s + 1))
            return &Mime__gperf_wordlist[key];
        }
    }
  return 0;
}
#line 1168 "mime.gperf"

char *Mime__getmime(register const char *str, register size_t len) {
  const struct Mime__pair *pair = Mime__gperf_lookup(str, len);

  if (pair) {
    return (char *)pair->mime;
  }
  else {
    return NULL;
  }
}
