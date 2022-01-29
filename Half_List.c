#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<=n;i++)
	{
    scanf("%d",&a[i]);
    }
    for(i=n-1;i>=n/2;i--)//1 2 3 4 5 10 9 8 7 6
	{
        printf("%d ",a[i]);
    }
    for(i=0;i<n/2;i++)
    {
        printf("%d ",a[i]);
    }
   
   return 0;
}