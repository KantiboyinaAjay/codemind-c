#include<stdio.h>
int main()
{
    int n,c=0,d=0,t,x;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        t=arr[i];
        while(t!=0)
        {
            x=t%10;
            c++;
            t=t/10;
        }
        if(c%2==0)
        {
            d++;
            c=0;
        }
        else
        {
            c=0;
        }
    }
    printf("%d",d);
}