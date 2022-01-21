#include<stdio.h>
int main()
{
	int a,i,count=0,even=0,odd=0,b;
	scanf("%d",&a);
	b=a;//a is stores in b
	for(i=0;a>0;i++)
	{
		if(a>0)
		 count++;
		 a=a/10;//for example a is 242 .. 242/10=2 a becomes 24 & count value is 1 like that.....
	}
	int arr[count];//count value is 3
	for(i=0;i<count;i++)//the values are taken in arrays
	{
		arr[i]=b%10;
		b=b/10;
		if(arr[i]%2==0)
		   even++;
		else
		   odd++;
	}
	if(even==count)
	  printf("Even");
	else if(odd==count)
	  printf("Odd");
	else
	  printf("Mixed");
}