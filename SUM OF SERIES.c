#include <stdio.h>

int main() {
    int n, i;
    float sum = 0.0;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        sum = sum + (1.0 / i);
    }

    printf("The sum of the series up to %d terms is: %.4f\n", n, sum);

    return 0;
}