#include<stdio.h>
int main()
{
	float a,i,c,m=0;
	scanf("%f",&a);
	for(i=1;i<=a;i++)
	{
	  c=1/i;
	  m+=c;	
	}
	printf("%.2f",m);
}