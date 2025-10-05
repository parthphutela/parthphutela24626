#include <stdio.h>

int main() {
    float l1, b1, l2, b2, l3, b3;
    float p1, p2, p3;

    printf("Enter length and breadth of rectangle 1: ");
    scanf("%f %f", &l1, &b1);

    printf("Enter length and breadth of rectangle 2: ");
    scanf("%f %f", &l2, &b2);

    printf("Enter length and breadth of rectangle 3: ");
    scanf("%f %f", &l3, &b3);

    p1 = 2 * (l1 + b1);
    p2 = 2 * (l2 + b2);
    p3 = 2 * (l3 + b3);

    printf("\nPerimeter of Rectangle 1: %.2f", p1);
    printf("\nPerimeter of Rectangle 2: %.2f", p2);
    printf("\nPerimeter of Rectangle 3: %.2f\n", p3);

    if (p1 > p2 && p1 > p3)
        printf("\nRectangle 1 has the highest perimeter.\n");
    else if (p2 > p1 && p2 > p3)
        printf("\nRectangle 2 has the highest perimeter.\n");
    else if (p3 > p1 && p3 > p2)
        printf("\nRectangle 3 has the highest perimeter.\n");
    else
        printf("\nTwo or more rectangles have equal highest perimeter.\n");

    return 0;
}
