#include<stdio.h>
int main()
{
    int a[3],b[3];
    for(int i=0;i<3;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<3;i++)
    {
        scanf("%d",&b[i]);
    }
    int c=0;
    int d=0;
    for(int i=0;i<3;i++)
    {
        if(a[i]>b[i])
        {
            c++;
        }
        if(a[i]<b[i])
        {
            d++;
        }
        if(a[i]==b[i])
        {
            continue;
        }
    }
    printf("%d %d",c,d);
}