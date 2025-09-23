#include<stdio.h>
int sum(int *x, int *y)
{
    *x=20;
    *y=50;
    int z=*x+*y;
    return z;
}

int main()
{
    int x=10;
    int y=20;
    int data = sum(&x,&y);
    printf("%d\n",data);
    printf("%d\n", x+y);
}