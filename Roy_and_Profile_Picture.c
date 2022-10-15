#include<stdio.h>
int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    for(int i=0;i<m;i++)
    {
        int a,b;
        scanf("%d %d",&a,&b);
        if(a==b && n<=a && n<=b)
        {
            printf("ACCEPTED
");
        }
        else if(n>a || n>b)
        {
            printf("UPLOAD ANOTHER
");
        }
        else
        {
            printf("CROP IT
");
        }
    }
}