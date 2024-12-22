#include<stdio.h>
int main()
{
    int a,b,add,sub,div,mul;

    printf("Enter the number a:");
    scanf("%d",&a);

    printf("Enter the number b:");
    scanf("%d",&b);

    add=a+b;
    sub=a-b;
    div=a/b;
    mul=a*b;

    printf(" \n the addition of a and b %d",add);
    printf("\n the subtraction of a and %d",sub);
    printf("\n the division of a and b %d",div);
    printf("\n the multiplication of a and b %d",mul);

    return 0;
}