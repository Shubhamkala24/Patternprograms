#include<stdio.h>
int main()
{
    int n = 5;
    int i,j;
    for(i=0;i<=n-3;i++)
    {
        for(j=0;j<n-3-i;j++)
        printf(" ");
        
        int k=2*i+1,x=1,y=k/2;
        for(j=0;j<k;j++)
          {
              if(j<=k/2)
                printf("%d",x++);
              else
                printf("%d",y--);
          }
         printf("\n");
    }
    for(i=0;i<n-3;i++)
    {
        for(j=0;j<=i;j++)
        printf(" ");

        int k=2*n-2*(i+3)-1,x=1,y=k/2;

        for(j=0;j<k;j++)
        {
            if(j<=k/2)
              printf("%d",x++);
            else
              printf("%d",y--);
        }
         printf("\n");
    }
    return 0;
}