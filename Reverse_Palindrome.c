#include<stdio.h>
int rev(int n)
{
    int c = n,s=0;
    while(c!=0)
    {
        int i = c%10;
        s = s*10+i;
        c = c/10;
    }
    return s;
}
int rec(int n)
{
    int c;
    c = rev(n)+n;
    if(rev(c)==c)
    {
    	return c;
	}
	else
	{
		rec(c);
	}
}
int main()
{
    int n;
    scanf("%d",&n);
    int m = rec(n);
    printf("%d",m);
}