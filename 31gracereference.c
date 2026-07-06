#include <stdio.h>

void addGrace(int *mark) {
    *mark += 5;
}

int main() {
    int mark = 50;
    addGrace(&mark);
    printf("After adding grace = %d\n", mark);
    return 0;
}