#include<stdio.h>
int fact(int n)
{
    int s=1;
    for(int i=1;i<=n;i++)
    {
        s=s*i;
    }
    return s;
}
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        int m;
        scanf("%d",&m);
        int c = fact(m);
        printf("%d
",c);
    }
}