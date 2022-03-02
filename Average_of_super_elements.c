#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    float res=0,sum=0,count=0;
    float arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%f",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        int t=0,x=arr[i];
        for(j=0;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                t++;
            }
        }
        if(t==x)
        {
            sum+=arr[i];
            count++;
            arr[i]=0;
        }
    }
    if(count==0)
    {
        printf("%d",-1);
    }
    else
    {
        res=sum/count;
        printf("%.2f",res);
    }
}