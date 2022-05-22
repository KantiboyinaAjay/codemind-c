#include<stdio.h>
int main()
{
    int n ,i , m, o;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d %d",&m,&o);
        printf("%d
",m+o);
    }
}