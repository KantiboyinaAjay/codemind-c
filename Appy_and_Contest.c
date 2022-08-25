#include<stdio.h>
long int gcd(long int a,long int b)
{  
    if (a == b)  
        return a;  
    if (a > b)  
        return gcd(a-b, b);
        else
    return gcd(a, b-a);  
}
int main()
{
    long long int N,K,ma,mb,lcm,tot,max;
    long int A,B;
    int i,T;
    scanf("%d",&T);
    for(i=1;i<=T;i++)
    {   
        max=0;
        tot=0;
        scanf("%lld %ld %ld %lld",&N,&A,&B,&K);
        	max=(A>B)?A:B;
        	ma=N/A;
        	mb=N/B;
	       lcm=(A*B)/gcd(A,B);
	    tot=ma+mb-(2*(N/lcm));
	    if(tot>=K)
	    printf("Win
");
	    else
	    printf("Lose
");
    }
    return(0);
}