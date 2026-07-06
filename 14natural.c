#include <stdio.h>

int main() {
    int n, i = 1;
    printf("Enter how many: ");
    scanf("%d", &n);
    while (i <= n) {
        printf("%d ", i);
        i++;
    }
    printf("\n");
    return 0;
}