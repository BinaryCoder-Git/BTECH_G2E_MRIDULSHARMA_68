#include <stdio.h>

int main() {
    int r1, c1, r2, c2, i, j, isEqual = 1;

    printf("Enter rows and columns for Matrix A: ");
    scanf("%d %d", &r1, &c1);
    printf("Enter rows and columns for Matrix B: ");
    scanf("%d %d", &r2, &c2);

    if (r1 != r2 || c1 != c2) {
        printf("Matrices are not equal (Dimensions mismatch).\n");
        return 0;
    }

    int a[r1][c1], b[r2][c2];

    printf("Enter elements of Matrix A:\n");
    for (i = 0; i < r1; i++)
        for (j = 0; j < c1; j++)
            scanf("%d", &a[i][j]);

    printf("Enter elements of Matrix B:\n");
    for (i = 0; i < r2; i++)
        for (j = 0; j < c2; j++)
            scanf("%d", &b[i][j]);

    for (i = 0; i < r1; i++) {
        for (j = 0; j < c1; j++) {
            if (a[i][j] != b[i][j]) {
                isEqual = 0; 
                break;
            }
        }
        if (!isEqual) break;
    }

    if (isEqual)
        printf("The matrices are equal.\n");
    else
        printf("The matrices are not equal.\n");

    return 0;
}
