#include<stdio.h>
int main()
{
    int i,j,h,n,a[100];
    int hcf(int,int);
    
    scanf("%d
",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",& a[i]);
    }
        for(i=0;i<n-1;i++)
        {
            h=hcf(a[i],a[i+1]);
            a[i+1]=h;
        }
        
          printf("%d",h);
          //getch();
}
      int hcf(int a,int b)
      { 
          if(a%b==0)
          {
              return b;
          }
          else
          {
              return(hcf(b,a%b));
          }
      }
      
          
          