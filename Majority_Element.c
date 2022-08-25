#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int arr[a],i,j;
    for (i=0; i<a; i++)
    {
        scanf("%d",&arr[i]);
    }
    int max=0,c=0,maj=arr[0];
    for (i=0; i<a; i++)
    {
        c=0;
        for (j=0; j<a; j++)
        {
            if (i!=j && arr[i]!=-1)
            {
                if (arr[i]==arr[j])
                {
                    arr[j]=-1;
                    c++;
                }
            }
        }
        if (max<c)
        {
            max=c;
            maj=arr[i];
        }
    }
    printf("%d",maj);
    return 0;
}