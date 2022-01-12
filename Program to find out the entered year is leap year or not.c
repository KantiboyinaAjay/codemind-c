#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    if(a%400==0 || a%100!=0 && a%4==0)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }


    return 0;
}