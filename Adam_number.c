#include<stdio.h>
#include<math.h>
int main()
{
    int n,temp=0,i,j,s=0,l=0;
    scanf("%d",&n);
    int a = pow(n,2);
    int z = n;
    while(z!=0)
    {
        i = z%10;
        s = s*10+i;
        z = z/10;
    }
    int b = pow(s,2);
    int c=b;
    while(c!=0)
    {
        j = c%10;
        l = l*10+j;
        c = c/10;
    }
    if(l==a)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}