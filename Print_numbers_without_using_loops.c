#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(n>=1 && n<=10000)
    {
       for(int i=1;i<=n;i++)
       {
        printf("%d ",i);
        }
    }
    else
     {
         printf("The Number Series is Not Possible Print");
         
     }
}