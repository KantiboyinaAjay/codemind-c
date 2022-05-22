#include<stdio.h>
int prime(int i)
{
    int j;
    if(i==1)
    {
        return 0;
    }
    for(j=2;j<(i/2)+1;j++)
    {
        if(i%j==0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int n,i,c=0,d=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            if(prime(i))
            {
                d+=1;
            }
            else
            {
                c+=1;
            }
        }
    }
    printf("%d",c);
}