#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    long long int s=0;
    long long int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%lld",&a[i]);
        s+=a[i];
    }
    printf("%lld",s);
    
}