#include<stdio.h>
#include<math.h>
int is_prime(int n)
{
    if(n==1)
        return 0;
    for(int i=2;i<(int)sqrt(n)+1;i++)
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
    int a;
    scanf("%d",&a);
    int c=0,s=0;
    if(is_prime(a)==1)
    {
        while(a!=0)
        {
            int i = a%10;
            a = a/10;
            c++;
            if(is_prime(i)==1)
            {
                s++;
            }
        }
        if(s==c)
            printf("Mega Prime");
        else
            printf("Not Mega Prime");
    }
    else
            printf("Not Mega Prime");
}