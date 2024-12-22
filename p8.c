#include <stdio.h>

int main() {
    char name[50];
    float marks[5], total = 0, percentage;
    int i;
    char grade[15];

    // Input student name
    printf("Enter the student's name: ");
    scanf("%49s", name);

    // Input marks for 5 subjects
    printf("Enter the marks of 5 subjects:\n");
    for (i = 0; i < 5; i++) {
        printf("Subject %d: ", i + 1);
        scanf("%f", &marks[i]);

        // Add to total marks
        total += marks[i];
    }

    // Calculate percentage
    percentage = (total / 500) * 100;

    // Determine the class
    if (percentage >= 60) {
        sprintf(grade, "First Class");
    } else if (percentage >= 50) {
        sprintf(grade, "Second Class");
    } else if (percentage >= 35) {
        sprintf(grade, "Pass Class");
    } else {
        sprintf(grade, "Fail");
    }

    // Display the result
    printf("\n--- Result ---\n");
    printf("Name: %s\n", name);
    printf("Total Marks: %.2f\n", total);
    printf("Percentage: %.2f%%\n", percentage);
    printf("Class: %s\n", grade);

    return 0;
}
