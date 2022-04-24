#include<stdio.h>
int main()
{
    int n,m,sum=0,mul=1;
    scanf("%d",&n);
    for(int i=0;n>0;i++)
    {
        m=n%10;
        n=n/10;
        sum+=m;
        mul*=m;
    }
    if(sum==mul)
    {
        printf("Spy Number");
    }
    else
    {
        printf("Not Spy Number");
    }
}