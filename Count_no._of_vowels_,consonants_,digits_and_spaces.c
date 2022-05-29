#include<stdio.h>
int main()
{
    int v=0,c=0,d=0,s=0;
    char a[100];
    scanf("%[^
]s",a);
    for(int i=0;a[i]!=NULL;i++)
    {
        if(a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u' || a[i]=='A' || a[i]=='E' || a[i]=='I' || a[i]=='O' || a[i]=='U')
            v++;
        else if(a[i]==' ')
            s++;
        else if(a[i]=='1' || a[i]=='2' || a[i]=='3' || a[i]=='4' || a[i]=='5' || a[i]=='6' || a[i]=='7' || a[i]=='8' || a[i]=='9' || a[i]=='0')
           d++;
        else
            c++;
    }
    printf("Vowels: %d
",v);
    printf("Consonants: %d
",c);
    printf("Digits: %d
",d);
    printf("White spaces: %d",s);
}