#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int x;
    scanf("%d",&x);
    int c=0;
    for(int i=0;i<n;i++)
    {
        if(x==a[i])
        {
            printf("%d",i);
            c=1;
            break;
        }
    }
    if(c==0)
    {
        printf("-1");
    }
}