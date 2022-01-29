#include<stdio.h>
int main()
{
    int num;
    int rem = 0, sum = 0, n;
    scanf("%d",&num);
    n = num;
    while(num > 0){
        rem = num%10;
        sum = sum + rem;
        num = num/10;
    }
    if(n%sum == 0)
    printf("True");
    else
    printf("False");
    
    return 0;
}