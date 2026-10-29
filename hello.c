#include <stdio.h>

int main() {
    int a, b;
    int sum;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    sum = a + b;

    printf("Sum = %d\n", sum);

    return 0;
}