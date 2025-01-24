#include <stdio.h>
/*
	gold or red
*/
#define CODE "#include <stdio.h>%c/*%c%cgold or red%c*/%c#define CODE %c%s%c%c#define OUTPUT_FILE %cGrace_kid.c%c%c#define GRACE() int main() { FILE *fp = fopen(OUTPUT_FILE, %cw%c); fprintf(fp, CODE, 10, 10, 9, 10, 10, 34, CODE, 34, 10, 34, 34, 10, 34, 34, 10, 10); fclose(fp); return 0; }%cGRACE()%c"
#define OUTPUT_FILE "Grace_kid.c"
#define GRACE() int main() { FILE *fp = fopen(OUTPUT_FILE, "w"); fprintf(fp, CODE, 10, 10, 9, 10, 10, 34, CODE, 34, 10, 34, 34, 10, 34, 34, 10, 10); fclose(fp); return 0; }
GRACE()
