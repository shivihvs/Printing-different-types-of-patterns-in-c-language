#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    int n,i,j,min=0,k;
    int a[4];
    scanf("%d", &n);
    for(i=0;i<2*n-1;++i)
    {
        for(j=0;j<2*n-1;++j)
        { min=0;
    
          a[0]=i;
          a[1]=j;
          a[2]=2*n-2-i;
          a[3]=2*n-2-j;
          min=a[0];
          for(k=1;k<4;k++)
          {
              if(min>a[k])
              {
                  min=a[k];
              }
          }
          printf("%d ",n-min);

        }
        printf("\n");
    }
  
    return 0;
}


