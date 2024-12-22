#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool is_prime(int n) {
    // Check if the number is less than 2
    if (n < 2) {
        return false;
    }
    
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    
    if (is_prime(number)) {
        printf("%d is a prime number.\n", number);
    } else {
        printf("%d is not a prime number.\n", number);
    }
    
    return 0;
}