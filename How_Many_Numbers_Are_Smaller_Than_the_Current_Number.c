#include<stdio.h>
int main()
{
	int a,i,count=0,min,j;
	scanf("%d",&a);
	int arr[a];
	for(i=0;i<a;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<a;i++)
	{
		min = arr[i];
	for(j=0;j<a;j++)
	{
		if(min>arr[j])
		   count++;
	}
	 printf("%d ",count);
	 count=0;
	}
}