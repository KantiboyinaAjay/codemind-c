#include<stdio.h>
int main()
{
    int c=0;
    char a[100],s[100];
    scanf("%[^
]s",a);
    for(int i=0;a[i]!=NULL;i++)
    {
        if(a[i]>='0' && a[i]<='9')
        {
            c++;
        }
    }
    if(c==0)
    {
        printf("Doesn't contain digit");
    }
    else
        printf("Contains %d digit",c);
    
}