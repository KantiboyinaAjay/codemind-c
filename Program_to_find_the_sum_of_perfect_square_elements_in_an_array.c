#include<stdio.h>
int perf(int n)
{
    int c=0;
    for(int i=1;i*i<=n;i++)
    {
        if(i*i==n)
        {
            c=1;
        }
    }
    if(c==0)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int c=0;
    for(int i=0;i<n;i++)
    {
        if(perf(a[i]))
        {
            c+=a[i];
        }
    }
    printf("%d",c);
}