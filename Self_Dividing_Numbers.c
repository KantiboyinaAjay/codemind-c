#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    for(int i=a;i<=b;i++)
    {
        int c=i,s=0,k=0;
        while(c!=0)
        {
            int m = c%10;
            if(m!=0 && i%m==0)
            {
                s++;
            }
            c=c/10;
            k++;
        }
        if(s==k)
        {
            printf("%d ",i);
        }
    }
}