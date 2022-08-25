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
    int s=0,s1=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            s++;
        }
        else
        {
            s1++;
        }
    }
    printf("%d %d",s,s1);
}