#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],b[n];
    int c=0,s=0,s1=0;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]==-1)
        {
            c+=1;
        }
        else
        {
            s=s+a[i];
        }
    }
    for(int i=0;i<n;i++)
    {
        if(b[i]==-1)
        {
            c+=1;
        }
        else
        {
            s1=s1+b[i];
        }
    }
    if(c==2)
    {
        printf("Infinite");
    }
    else
    {
        int c1=0;
        for(int i=0;i<9999;i++)
        {
            if((i+s)==s1)
            {
                c1+=1;
            }
        }
        printf("%d",c1);
    }
}