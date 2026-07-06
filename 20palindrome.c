#include <stdio.h>

int main() {
    int num, rev = 0, orig, rem;
    printf("Enter a number: ");
    scanf("%d", &num);
    orig = num;
    while(num != 0) {
        rem = num % 10;
        rev = rev * 10 + rem;
        num /= 10;
    }
    if (orig == rev) {
        printf("%d is a palindrome.\n", orig);
    } else {
        printf("%d isn't a palindrome", orig);
    }
    return 0;
}