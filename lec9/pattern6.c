#include<stdio.h>
int main()
{
    int i,j;
    for(i=0;i<=5;i++)
    {
      for(j=5;j>i;j--)
        
            {
              printf("   ");
            }
            for(int k=0;k<=i;k++)
            {
                printf(" * ");
            }
            for(int l=0;l<i;l++)
            {-
                printf(" * ");
            }
        

        printf("\n");
    }
    
}