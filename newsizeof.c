#include <stdio.h>

int main() {

    printf("Size of int: %d bytes\n", sizeof(int));

    printf("Size of float: %zu bytes\n", sizeof(float));

    printf("Size of double: %zu bytes\n", sizeof(double));

    printf("Size of char: %zu bytes\n", sizeof(char));

    return 0;
}