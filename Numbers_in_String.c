#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    int c=0,sum=0;
    char a[100],s[100];
    scanf("%[^
]s",a);
    for(int i=0;a[i]!=NULL;i++)
    {
        if(a[i]>='0' && a[i]<='9')
        {
            sum+=int(a[i])-48;
        }
    }
    printf("%d",sum);
    
}