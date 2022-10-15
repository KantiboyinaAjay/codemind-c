#include<stdio.h>
int add(int n,int m)
{
    while(n!=0)
    {
        int i = n%10;
        m+=i;
        n = n/10;
    }
    if(m>=0 && m<=9)
    {
        return m; 
    }
    return add(m,0);
}
int main()
{
    int n;
    scanf("%d",&n);
    int m = add(n,0);
    printf("%d",m);
}