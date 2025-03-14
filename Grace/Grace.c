#include <stdio.h>
/*
	gold or red
*/
#define CODE "#include <stdio.h>%c/*%c%cgold or red%c*/%c#define CODE %c%s%c%c#define OUTFILE %cGrace_kid.c%c%c#define GRACE() int main() { FILE *fp = fopen(OUTFILE, %cw%c); fprintf(fp, CODE, 10, 10, 9, 10, 10, 34, CODE, 34, 10, 34, 34, 10, 34, 34, 10, 10); fclose(fp); return 0; }%cGRACE()%c"
#define OUTFILE "Grace_kid.c"
#define GRACE() int main() { FILE *fp = fopen(OUTFILE, "w"); fprintf(fp, CODE, 10, 10, 9, 10, 10, 34, CODE, 34, 10, 34, 34, 10, 34, 34, 10, 10); fclose(fp); return 0; }
GRACE()
