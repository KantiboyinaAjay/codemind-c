#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    for(int i=a;i<b;i++)
    {
        int c=i,s=0;
        while(c!=0)
        {
            int j = c%10;
            s = s*10+j;
            c = c/10;
        }
        if(s==i)
        {
            printf("%d ",i);
        }
    }
}