#include<stdio.h>
int main()
{
	int a,b,c=0,i,n;
	scanf("%d",&a);
	b=a*a;
	for(i=1;b>0;i++)
	{
	i=b%10;
	b=b/10;
	c+=i;
    }
    if(a==c)
    {
    	printf("Neon Number");
	}
	else
	{
		printf("Not Neon Number");
	}
	return 0;
}