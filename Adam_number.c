#include<stdio.h>
int main()
{
    int n,r=0,t=0,s=0,k;
    scanf("%d",&n);
    int x = n*n;
    while(n>0)
    {
        k = n % 10;
        s = s*10+k;
        n = n/10;
    }
    s = s*s;
    while(s>0)
    {
        k = s %10;
        t = t * 10 + k;
        s = s / 10;
    }
    if(t==x)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}