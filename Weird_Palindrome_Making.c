#include<stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    for(int i=0;i<x;i++)
    {
        int n,c=0;
        scanf("%d",&n);
        for(int i=0;i<n;i++)
        {
            int a;
            scanf("%d",&a);
            if(a%2!=0)
            {
                c++;
            }
        }
        if(c%2!=0)
        {
            c--;
        }
        printf("%d
",c/2);
        
    }
    
}