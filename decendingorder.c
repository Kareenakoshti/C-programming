#include<stdio.h>
int main()
{
    int a[10];
    int i,j,temp;
    for(i=0;i<0;i++)
    {
        printf("The nummber of [%d] elements are:",i);
        scanf("%d",a[i]);
    }
    for(i=0;i<9;i++)
    {
        for(j=i+1;j<10;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("the sorted elements are:");
    for(i=0;i<=9;i++)
    printf("%d \n",a[i]);
}
