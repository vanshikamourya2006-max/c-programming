/*0
  0 1
  0 1 2 
  0 1 2 3
  0 1 2 3 4*/
#include<stdio.h>
int main()
{
    int i,j;
    for(i=0;i<=5;i++)
    {
        for(j=0;j<i;j++)
        {
            printf("%d",j);
        }
        printf("  \n ");
    }

}