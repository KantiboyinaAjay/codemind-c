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
    int v,f;
    for(int i=0;i<n;i+=2)
    {
        f=a[i];
        v=a[i+1];
        for(int j=0;j<f;j++)
        {
            printf("%d ",v);
        }
    }
    
}