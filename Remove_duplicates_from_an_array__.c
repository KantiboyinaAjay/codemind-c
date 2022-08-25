#include<stdio.h>
#include<limits.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],c=0;   
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        
        for(int j=0;j<n;j++)
        {
            if(a[i]==a[j] && i!=j)
            {
                a[j]=INT_MAX;
            }
        }
        if(a[i]!=INT_MAX)
        {
            printf("%d ",a[i]);
        }
    }
}