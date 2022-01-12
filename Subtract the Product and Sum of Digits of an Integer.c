#include<stdio.h>
int main()
{
	int n,i,c=0,m=1;
	scanf("%d",&n);
	for(i=1;n>0;)
	{
	  i=n%10;
	  n=n/10;
	 
	  c=c+i;
	  m=m*i;
	}
	printf("%d",m-c);
}