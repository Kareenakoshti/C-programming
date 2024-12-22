#include<stdio.h>
#include<math.h>

int main()
{
    double u,a,t,V,S,b,c,T,p,H;

    printf("Enter the value of u,a, and t:");
    scanf("%lf %lf %lf",&u,&a,&t);

    V=u+a*t;
    printf("V=u+at= %.2lf\n",V);

    S=u*t+0.5*a*t*t;
    printf("S=ut+1/2at=%.2lf\n",S);

    printf("Enter the values of a,b and c:");
    scanf("%lf %lf %lf",&a,&b,&c);

    T=2*a+sqrt(b)+a*c;
    printf("T=2*a+sqrt(b)+ac=%.2lf\n",T);

    printf("Enter the values of b and p:");
    scanf("%lf %lf %lf",&b,&p);

    H=sqrt(b)+p*p;
    printf("H=sqrt(b)+p=%2lf\n",H);

    return 0;
}
