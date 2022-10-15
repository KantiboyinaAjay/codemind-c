#include<stdio.h>
int sum(int arr[],int n,int s,int i)
{
    if(i==n)
    {
        return s;
    }
    s+=arr[i];
    i++;
    return sum(arr,n,s,i);
}
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int f = sum(arr,n,0,0);
    printf("%d",f);
}