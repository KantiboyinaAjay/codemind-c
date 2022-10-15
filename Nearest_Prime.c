#include<stdio.h>
#include<math.h>
int prime(int n)
{
    if(n==1)
    {
        return 0;
    }
    for(int i=2;i<sqrt(n)+1;i++)
    {
        if(n%i==0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        int n;
        scanf("%d",&n);
        int temp=n;
        int k=0,g=0;
        for(int i=n;i>1;i--)
        {
            if(prime(i)==1)
            {
                k=i;
                break;
            }
        }
        while(temp!=0)
        {
            if(prime(temp)==1)
            {
                g=temp;
                break;      
            }
            temp+=1;
        }
        if((n-k)<=(g-n))
        {
            printf("%d
",k);
        }
        else if((n-k)>=(g-n))
        {
            printf("%d
",g);
        }
    }
}