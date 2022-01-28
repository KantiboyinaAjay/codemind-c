#include<stdio.h>
int main()
{
	int a,i,b=0,c,n=1;
	scanf("%d",&a);
	for(i=0;i<a;i++)
	{
		printf("%d ",b);
		c=b+n;
		b=n;
		n=c;
	}
}