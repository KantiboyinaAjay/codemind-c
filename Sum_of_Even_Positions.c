#include<stdio.h>
int main()
{
	int i,n,m=0;
	int arr[n];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		if(i%2==0)
		{
			m+=arr[i];
		}
	}
	printf("%d",m);
}