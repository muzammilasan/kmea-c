#include <stdio.h>
#include <string.h>

int main() {
    char str[50];
    char *p;
    int len;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    p = str;
    len = strlen(str);

    printf("The reverse of the string is: ");
    for(int i = len - 1; i >= 0; i--) {
        printf("%c", *(p + i));
    }
    printf("\n");

    return 0;
}