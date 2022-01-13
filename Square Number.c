#include <stdio.h>
#include <math.h>
int main()
{
int n;
int i;
float f;
scanf("%d",&n);
f=sqrt((double)n);
i=f;
if(i==f)
printf("True");
else
printf("False");
return 0;
}