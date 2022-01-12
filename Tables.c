#include<stdio.h>
int main ()
{ 
    int a,b,n,m;
    scanf("%d",&b);
    scanf("%d",&n);
    for(a=1;a<=n;a++)
    { 
        if(a%2==1)
        {
          
          m=b*a;
          printf("%d x %d = %d
",b,a,m);
        }
    }
    return 0;
}