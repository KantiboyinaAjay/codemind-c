#include<stdio.h>
int main()
{
    int n,arr[100];
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int d=2;
    while(n!=0)
    {
        int c=0;
        for(int i=0;i<n;i++)
        {
            if(d%arr[i]==0)
            {
                c++;
            }
        }
        if(n==c)
        {
            printf("%d",d);
            break;
        }
        d++;
    }
}