#include <stdio.h>

void addGrace(int mark) {
    mark += 5;
    printf("After adding grace (inside function) = %d\n", mark);
}

int main() {
    int mark = 50;
    addGrace(mark);
    printf("Original mark (outside function) = %d\n", mark);
    return 0;
}