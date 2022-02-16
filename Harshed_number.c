#include<stdio.h>
int main()
{
	int b,i,n,sum=0,temp;
	scanf("%d",&b);
	temp=b;
	for(i=0;b>0;i++)
	{
		n=b%10;
		b=b/10;
		sum+=n;
	}
	if(temp%sum==0)
	{
		printf("True");
	}
	else
	{
		printf("False");
	}
}