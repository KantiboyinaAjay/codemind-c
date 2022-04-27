#include<stdio.h>
#include<math.h>
int main()
{
    int n,m;
    float i;
    scanf("%d",&n);
    i = sqrt(n);
    m=i;
    if(i==m)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}