#include<stdio.h>
int main()
{
    int m,n=0;
    scanf("%d",&m);
    for(int i=1;i<m;i++)
    {
        if(m%i==0)
        {
           n+=i; 
        }
    }
    if(n==m)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}