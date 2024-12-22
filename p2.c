#include <stdio.h>

int main() {
    int num1, num2, num3;
    int largest, smallest;

    // Input three numbers
    printf("Enter three integers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    // Find the largest number
    if (num1 >= num2 && num1 >= num3) {
        largest = num1;
    } else if (num2 >= num1 && num2 >= num3) {
        largest = num2;
    } else {
        largest = num3;
    }

    // Find the smallest number
    if (num1 <= num2 && num1 <= num3) {
        smallest = num1;
    } else if (num2 <= num1 && num2 <= num3) {
        smallest = num2;
    } else {
        smallest = num3;
    }

    // Check if largest is even or odd
    printf("Largest number: %d (%s)\n", largest, (largest % 2 == 0) ? "Even" : "Odd");

    // Check if smallest is even or odd
    printf("Smallest number: %d (%s)\n", smallest, (smallest % 2 == 0) ? "Even" : "Odd");

    return 0;
}
