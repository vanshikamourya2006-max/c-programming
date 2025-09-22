#include<stdio.h>
int main()
{
  int a[10]={6,5,3,9,7,4,2,1,8,0};
  int x;
  printf("enter the sum of the pairs you want=");
  scanf("%d" ,&x);
  int i,j;
  for(i=0;i<10;i++)
  {
    for(j=0;j<10;j++)
    {
        if(a[i] + a[j]==x)
        {
        printf("%d at a[%d] and %d at a[%d]=%d\n",a[i],i,a[j],j,x);
        }
    }
  }
}