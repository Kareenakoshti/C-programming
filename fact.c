#include <stdio.h>

int main() {
    int number;
    unsigned long long factorial = 1; // Use unsigned long long to handle large results

    // Ask the user for input
    printf("Enter a non-negative integer: ");
    scanf("%d", &number);

    // Check if the number is negative
    if (number < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        // Calculate factorial
        for (int i = 1; i <= number; ++i) {
            factorial *= i; // Multiply factorial by i
        }
    
        printf("Factorial of %d = %llu\n", number, factorial);
    }

    return 0;
}