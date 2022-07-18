#include<stdio.h>
int main()
{
    int n,m,a=0,s=0;
    scanf("%d %d",&n,&m);
    int arr[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(i%2==0)
            {
                a+=arr[i][j];
            }
            else
            {
                s+=arr[i][j];
            }
        }
    }
    printf("%d %d",a,s);
}