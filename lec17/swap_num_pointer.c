#include<stdio.h>
int swap(int *p1, int *p2)
{
   int temp =*p1;
   *p1=*p2;
   *p2=temp;
}

int main()
{
   
        int x=20;
        int y=50;
    int z = swap(&x,&y);
    printf("x=%d\n",x);
     printf("y=%d\n",y);
}