
#include <stdio.h>
void main() {
    float r, area, circum;

    printf("Enter Radius: ");
    scanf("%f", &r);

    area = 3.14 * r * r;
    circum = 2 * 3.14 * r;

    printf("Area is: %f\n", area);
    printf("Circumference is: %f\n", circum);
}
