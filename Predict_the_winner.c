#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],s=0,s2=0;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            s=s+a[i];
        }
        else if(a[i]%2!=0)
        {
            s2=s2+a[i];
        }
    }
    if(abs(s-s2)%4==0)
    {
        printf("X");
    }
    else
    {
        printf("Y");
    }
}