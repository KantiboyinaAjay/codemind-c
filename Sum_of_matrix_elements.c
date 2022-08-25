#include<stdio.h>
int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    int a[100][100];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
     int  s=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            s=s+a[i][j];
        }
    }
    printf("%d ",s);
}