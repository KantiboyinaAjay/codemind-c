#include<stdio.h>
int main()
{
	int a,b,m,i,s=0;
	scanf("%d",&a);
	m=a;
	for(i=1;a>0;i++)
	{
		b=a%10;
		s=s*10+b;
		a=a/10;	
	}
	if(s!=m)
	{
		printf("False");
	}
	else
	{
       printf("True");
    }
}