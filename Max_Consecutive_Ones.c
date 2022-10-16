#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int c=0,m=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==1)
        {
            c++;
        }
        else
        {
            if(m<c)
            {
                m=c;
                c=0;
            }
        }
    }
    if(m<c)
    {
        printf("%d",c);
    }
    else
    printf("%d",m);
}