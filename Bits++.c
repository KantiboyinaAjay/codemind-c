#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int c=0;
    while(n--)
    {
        char n[100];
        scanf("%s",n);
        if(n[1]=='+')
        {
            c+=1;
        }
        else
        {
            c-=1;
        }
    }
    printf("%d",c);
}