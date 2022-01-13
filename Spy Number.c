#include<stdio.h>
int main()
{
	int a,i,s=0,m=1,b;
	scanf("%d",&a);
	for(i=0;a>0;i++)
	{
		i=a%10;
		a=a/10;
		s+=i;
		m*=i;
	}
	if(m==s)
		{
			printf("Spy Number");
		}
	else
		{
			printf("Not Spy Number");
		}
	return 0;
}