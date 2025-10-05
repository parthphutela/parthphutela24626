#include <stdio.h>

int main() {
    int n;
    printf("Enter number of rectangles: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid number of rectangles.\n");
        return 1;
    }

    double length, breadth;
    double maxPerimeter = -1.0;
    int maxIndex = -1;

    for (int i = 1; i <= n; ++i) {
        printf("Rectangle %d - enter length and breadth: ", i);
        if (scanf("%lf %lf", &length, &breadth) != 2) {
            printf("Invalid input. Exiting.\n");
            return 1;
        }
        if (length < 0 || breadth < 0) {
            printf("Dimensions must be non-negative. Exiting.\n");
            return 1;
        }

        double perimeter = 2.0 * (length + breadth);
        if (perimeter > maxPerimeter) {
            maxPerimeter = perimeter;
            maxIndex = i;
        }
    }

    printf("\nHighest perimeter: %.2f (Rectangle %d)\n", maxPerimeter, maxIndex);
    return 0;
}



