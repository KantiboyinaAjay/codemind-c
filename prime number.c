#include<stdio.h>
int main()
{
    int n,i,b=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            b++;
        }
    }
    if(b==2)
       printf("prime");
    else
       printf("not a prime");
     return 0;
}