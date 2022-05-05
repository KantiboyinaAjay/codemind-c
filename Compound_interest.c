#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c;
    scanf("%f %f %f",&a,&b,&c);
    double f;
    f=a*(pow((1+b/100.00),c));
    printf("%.2f",f);
}