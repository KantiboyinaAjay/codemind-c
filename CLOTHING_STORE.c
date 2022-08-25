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
    int c=0;    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(j>i && a[i]!=0&& a[j]!=0)
            {
                if(a[i]==a[j])
                {
                    a[i]=0;
                    a[j]=0;
                    c++;
                }
            }
        }
    }
    printf("%d",c);
}
