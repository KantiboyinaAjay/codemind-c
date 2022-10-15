#include<stdio.h>
#include<math.h>
int main()
{
    int m;
    scanf("%d",&m);
    for(int _=0;_<m;_++)
    {
        int n;
        scanf("%d",&n);
        int c=n;
        int j = sqrt(c);
        if((j*j)==n)
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