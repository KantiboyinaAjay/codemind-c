#include<stdio.h>
int main()
{
	int a,b,c,i;
	scanf("%d %d",&a,&b);
	for(i=1;i<=b;i++)
	{
		c=i*a;
		if(c%b==0)
	    {
	    	printf("%d ",c);
	    	break;
	    }
	}
	return 0;
}