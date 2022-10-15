#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    int d=0;
    for(int i=a;i<=b;i++)
    {
        if(i%c==0)
        {
            d++;
        }
    }
    printf("%d",d);
}