#include <stdio.h>

int main() {
    float v, u, a, t;

    // Input values for u, a, and t
    printf("Enter the initial velocity (u): ");
    scanf("%f", &u);
    
    printf("Enter the acceleration (a): ");
    scanf("%f", &a);
    
    printf("Enter the time (t): ");
    scanf("%f", &t);

    // Calculate the final velocity v
    v = u + a * t;

    // Display the result
    printf("The final velocity (v) is: %.2f\n", v);

    return 0;
}
