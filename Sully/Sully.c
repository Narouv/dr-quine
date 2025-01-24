#include <stdio.h>
#include <stdlib.h>
#define X 5
#define CODE "#include <stdio.h>%c#include <stdlib.h>%c#define X %d%c#define CODE %c%s%c%c#define RUN() int main() { if (X > 0) { char outfile[256]; sprintf(outfile, %cSully_%%d.c%c, X-1); FILE *fp = fopen(outfile, %cw%c); fprintf(fp, CODE, 10, 10, X-1, 10, 34, CODE, 34, 10, 34, 34, 34, 34, 34, 34, 34, 34, 10, 10); fclose(fp); char comp_exec[256]; sprintf(comp_exec, %ccc Sully_%%d.c -o Sully_%%d%c, X-1, X-1); system(comp_exec); sprintf(comp_exec, %c./Sully_%%d%c, X-1); system(comp_exec); } }%cRUN()%c"
#define RUN() int main() { if (X > 0) { char outfile[256]; sprintf(outfile, "Sully_%d.c", X); FILE *fp = fopen(outfile, "w"); fprintf(fp, CODE, 10, 10, X, 10, 34, CODE, 34, 10, 34, 34, 34, 34, 34, 34, 34, 34, 10, 10); fclose(fp); char comp_exec[256]; sprintf(comp_exec, "cc Sully_%d.c -o Sully_%d", X, X); system(comp_exec); sprintf(comp_exec, "./Sully_%d", X); system(comp_exec); } }
RUN()
