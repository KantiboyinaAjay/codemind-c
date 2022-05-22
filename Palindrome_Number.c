#include<stdio.h>
int main()
{
    int n,i,m;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&m);
        int a = m;
        int s=0;
        while(m!=0)
        {
            int v = m%10;
            s = s*10+v;
            m = m/10;
        }
        if(s==a)
        {
            printf("True
");
        }
        else
        {
            printf("False
");
        }
    }
}