#include<stdio.h>
#include<math.h>
int prime(int n)
{
    if(n==1)
    {
        return 0;
    }
    if(n==2)
    {
        return 1;
    }
    for(int i=2;i<sqrt(n)+1;i++)
    {
        if(n%i==0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int t,m;
    scanf("%d %d",&t,&m);
    for(int i=t;i<=m;i++)
    {
        if(prime(i)==1)
        {
            printf("%d
",i);
        }
    }
}