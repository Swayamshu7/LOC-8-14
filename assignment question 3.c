#include <stdio.h>

int main() {
    int num, sum = 0, digit;

    printf("Enter a number: ");
    scanf("%d", &num);

    do {
        digit = num % 10; // Get the last digit
        sum += digit; // Add the last digit to the sum
        num /= 10; // Remove the last digit from the number
    } while (num != 0);

    printf("The sum of the digits is %d.\n", sum);

    return 0;
}