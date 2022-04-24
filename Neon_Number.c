#include<stdio.h>
int main()
{
    int n,b,sum=0;
    scanf("%d",&n);
    int m = n*n;
    for(int i=0;m>0;i++)
    {
        b=m%10;
        m=m/10;
        sum+=b;
    }
    if(n==sum)
    {
        printf("Neon Number");
    }
    else
    {
        printf("Not Neon Number");
    }
}