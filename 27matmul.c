#include <stdio.h>

int main() {
    int a[50][50], b[50][50], p[50][50];
    int arows, acols, brows, bcols;
    int i, j, k;

    printf("Enter rows and columns of Matrix A: ");
    scanf("%d %d", &arows, &acols);

    printf("Enter rows and columns of Matrix B: ");
    scanf("%d %d", &brows, &bcols);

    if (acols != brows) {
        printf("Matrix multiplication isn't possible.\n");
        return 0;
    }

    printf("Enter elements of Matrix A:\n");
    for(i = 0; i < arows; i++)
        for(j = 0; j < acols; j++)
            scanf("%d", &a[i][j]);

    printf("Enter elements of Matrix B:\n");
    for(i = 0; i < brows; i++)
        for(j = 0; j < bcols; j++)
            scanf("%d", &b[i][j]);
    for(i = 0; i < arows; i++)
        for(j = 0; j < bcols; j++)
            p[i][j] = 0;
    
    for(i = 0; i < brows; i++)
        for(j = 0; j < bcols; j++)
            for(k = 0; k < acols; k++)
                p[i][j] += a[i][k] * b[k][j];

    printf("Resultant Matrix:\n");
    for(i = 0; i < brows; i++) {
        for(j = 0; j < bcols; j++)
            printf("%d ", p[i][j]);
        printf("\n");
    }
    return 0;
}