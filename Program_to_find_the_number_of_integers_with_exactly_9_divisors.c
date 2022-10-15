#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int y=0;
    for(int i=1;i<=n;i++)
    {
        int c=0;
        int j=1;
        while(j!=i+1)
        {
            if(i%j==0)
            {
                c++;
            }
            j++;
        }
        if(c==9)
        {
            printf("%d ",i);
            y++;
        }
    }
    printf("
Total=%d",y);
}