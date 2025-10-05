#include <stdio.h>

int main() {
    float length, breadth;

    printf("Enter length and breadth: ");
    scanf("%f %f", &length, &breadth);

    float perimeter = 2 * (length + breadth);
    printf("Perimeter of rectangle = %.2f\n", perimeter);

    return 0;
}
