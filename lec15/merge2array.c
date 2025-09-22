#include<stdio.h>
int main()
{
    int i;
    int a[5]={1,2,3,4,5};
    int b[5]={6,7,8,9,10};
    int c[10];
    for( i=0;i<5;i++)
    {
        c[i]=a[i];
    }
    
    for(int j=0;j<5;j++)
    {
      c[j+5]=b[j];
    }
    for(int k=0;k<10;k++)
    {

        printf("%d\n",c[k]);
    }
}