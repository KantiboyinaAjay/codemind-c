#include<stdio.h>
int main()
{
    int n,m,i,s=0;
    scanf("%d",&n);
    for(i=1;n!=0;i++)
    {
        m = n%10;
        s = s*10+m;
        n = n/10;
    }
    printf("%d",s);
}