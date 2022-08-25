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
    int p=1;
    for(int i=0;i<n;i++)
    {
        p=1;
        for(int j=0;j<n;j++)
        {
            if(i!=j)
            {
                p*=a[j];
            }
        }
        printf("%d ",p);
    }
    
}