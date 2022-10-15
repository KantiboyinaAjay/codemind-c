#include<stdio.h>
#include<math.h>
int fib(int n)
{
    int a=0,b=1;
    int c=a+b;
    while(c<n)
    {
        c=a+b;
        a=b;
        b=c;
    }
    if(n==c)
    {
        return 1;
    }
    return 0;
}
int main()
{
    int n;
    scanf("%d",&n);
    int temp=n;
    int k=0,g=0;
    for(int i=n;i>0;i--)
    {
        if(fib(i)==1)
        {
            k=i;
            break;
        }
    }
    while(temp!=0)
    {
        if(fib(temp)==1)
        {
            g=temp;
            break;
        }
        temp+=1;
    }
    if((n-k)<(g-n))
    {
        printf("%d
",k);
    }
    else if((n-k)==(g-n))
    {
        printf("%d %d
",k,g);
    }
    else
    {
            printf("%d
",g);
    }
}