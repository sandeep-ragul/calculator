#include <stdio.h>

int main() {
    double num1, num2;

    printf("Enter first number: ");
    scanf("%ld", &num1);

    printf("Enter second number: ");
    scanf("%ld", &num2);

    printf("You entered: %ld and %ld\n", num1, num2);

    return 0;
}