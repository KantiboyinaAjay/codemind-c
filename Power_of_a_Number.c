#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    int m = pow(a,b);
    int v = m%c;
    printf("%d",v);
}