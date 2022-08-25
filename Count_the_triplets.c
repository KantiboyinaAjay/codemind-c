#include<stdio.h>
int main()
{
    int l;
    scanf("%d ",&l);
    for(int x=0;x<l;x++)
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
                for(int k=0;k<n;k++)
                {
                    if(i!=j && j!=k)
                    {
                     if(a[j]+a[k]==a[i])
                     {
                         c++;
                     }
                    }
                }
            }
        }
        if(c==0)
        {
            printf("-1
");
        }
        else
        {
            printf("%d
",c/2);
        }
    }
}