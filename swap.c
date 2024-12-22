#include<stdio.h>
int main()
{
    int a,b,temp;
    printf("Enter the first number (a):");
    scanf("%d",&a);
    printf("Enter the second number (b):");
    scanf("%d",&b);

    printf("\n before swapping:\n");
    printf("a=%d,b=%d\n",a,b);
    temp=a;
    a=b;
    b=temp;
    printf("\n after swapping using a third variable:\n");
    printf("a=%d,b=%d\n",a,b);

    a=a+b;
    b=a-b;
    a=a-b;

    printf("\n after swapping back without using a third variable:\n");
    printf("a=%d,b=%d\n",a,b);
    return 0;
}

