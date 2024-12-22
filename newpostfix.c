#include <stdio.h>

int main() {
    int a = 5, b = 5;

    printf("Postfix increment:\n");
    printf("Value of a before: %d\n", a++); 
    printf("Value of a after: %d\n", a);   

    printf("Prefix increment:\n");
    printf("Value of b before: %d\n", ++b); 
    printf("Value of b after: %d\n", b); 

    printf("Postfix decrement:\n");
    printf("Value of a before: %d\n", a--); 
    printf("Value of a after: %d\n", a);  

    printf("Prefix decrement:\n");
    printf("Value of b before: %d\n", --b); 
    printf("Value of b after: %d\n", b);   

    return 0;
}