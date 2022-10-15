#include<stdio.h>
#include<math.h>
int main()
{
    int n,x;
    scanf("%d %d",&n,&x);
    int a = (int)log10(n)+1;
    int b=n%(int)pow(10,x);
    int c=n/(int)pow(10,a-x);
    printf("%d",(int)abs(b-c));
}