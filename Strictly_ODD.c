#include<stdio.h>
int main()
{
    int a,i;
    scanf("%d",&a);
    int arr[a];
    for(i=0;i<a;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<a;i++)
    {
        if (arr[i]%2 != 0)
        {
            if (i%2 == 0)
            {
                printf("False");
                return 0;
            }
        }
    }
    printf("True");
}