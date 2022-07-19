#include<stdio.h>
int main()
{
    int c=0;
    char a[100];
    scanf("%[^
]s",a);
    for(int i=0;a[i]!=NULL;i++)
    {
        if(a[i]==' ' && a[i+1]!=' ')
        {
            c++;
        }
    }
    printf("%d",c+1);
}