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
    int N;
    scanf("%d",&N);
    while(N>0)
    {
        int p=a[0],l;
        a[0]=a[n-1];
        for(int i=1;i<n;i++)
        {
            l=a[i];
            a[i]=p;
            p=l;
        }
        N--;
    }
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}