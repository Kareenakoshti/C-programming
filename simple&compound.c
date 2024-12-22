#include<stdio.h>
#include<math.h>
int main()
{
    float principal,rate,time,sinterest,cinterest;

    printf("Enter the principal amount:");
    scanf("%f",&principal);

    printf("Enter the annual interest rate(in percentage):");
    scanf("%f",&rate);

    printf("Enter the time (in years):");
    scanf("%f",&time);

    sinterest=(principal*rate*time)/100;

    cinterest=principal*pow((1+rate/100),time)-principal;

    printf("simple interest: %.2f\n",sinterest);

    printf("compound interest:%.2f\n",cinterest);

    return 0;
}
