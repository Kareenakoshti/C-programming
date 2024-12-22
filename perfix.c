#include <stdio.h>

int main() {
    int a = 5;

    // Prefix increment
    printf("Prefix increment: a = %d, ++a = %d\n",  ++a);
    printf("After prefix increment: a = %d\n", a);

    a = 5; // Reset a to 5

    // Postfix increment
    printf("Postfix increment: a = %d, a++ = %d\n", a++);
    printf("After postfix increment: a = %d\n", a);

    a = 5; // Reset a to 5

    // Prefix decrement
    printf("Prefix decrement: a = %d, --a = %d\n",  --a);
    printf("After prefix decrement: a = %d\n", a);

    a = 5; // Reset a to 5

    // Postfix decrement
    printf("Postfix decrement: a = %d, a-- = %d\n",  a--);
    printf("After postfix decrement: a = %d\n", a);

    return 0;
}