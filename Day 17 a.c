#include <stdio.h>
#include <math.h>

int main() {
    int n, original, digit, count = 0;
    int sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    original = n;

    
    int temp = n;
    while(temp != 0) {
        temp /= 10;
        count++;
    }


    temp = n;
    while(temp != 0) {
        digit = temp % 10;
        sum += pow(digit, count);
        temp /= 10;
    }

    
    if(sum == original)
        printf("%d is an Armstrong number.\n", original);
    else
        printf("%d is NOT an Armstrong number.\n", o
