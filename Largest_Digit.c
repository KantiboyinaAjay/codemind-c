#include<stdio.h>
int main()
{
    int num, remider, largest= 0;
    scanf ("%d" , &num);
    
    while (num > 0)
    {
        remider = num % 10;
        if (largest < remider)
        {
            largest = remider;
        }
        num = num / 10;
    }
    printf ("%d", largest);
    return 0;
}