#include <stdio.h>

// crazy crazy crazy crazy

void printQuine();

int main() {
    // uiiaiauuiiai
    printQuine();
    return 0;
}

void printQuine() {
    char *s = "#include <stdio.h>%c%c// crazy crazy crazy crazy%c%cvoid printQuine();%c%cint main() {%c    // uiiaiauuiiai%c    printQuine();%c    return 0;%c}%c%cvoid printQuine() {%c    char *s = %c%s%c;%c    printf(s, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 34, s, 34, 10, 10, 10);%c}%c";
    printf(s, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 34, s, 34, 10, 10, 10);
}
