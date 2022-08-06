#include<stdio.h>
int main()
{
        int n,c=0;
        scanf("%d",&n);
        int a[n];
        for(int i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        int k;
        scanf("%d",&k);
        for(int i=0;i<n;i++)
        {
            if(a[i]<=k)
            {
                c++;
            }
            else
            {
                c+=2;
            }
        }
     printf("%d",c);
}