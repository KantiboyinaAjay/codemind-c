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
    int max=0,c=0,maxc=0;
    for (i=0; i<a; i++)
    {
        c=1;
        for (j=0; j<a; j++)
        {
            if (i!=j)
            {
                if (arr[i]==arr[j])
                {
                    c++;
                }
            }
        }
        if (c==maxc)
        {
            maxc=c;
            if (arr[i]<max)
            {
                max=arr[i];
            }
        }
        else if (c>maxc)
        {
            maxc=c;
            max=arr[i];
        }
    }
    printf("%d",max);
    return 0;
}