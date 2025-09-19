#include<stdio.h>
void main()
{
    int i, n;
    printf("enter a no=");
    scanf("%d",&n);
    int fact=1;
    n=5;
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    } 
    printf("factorial=%d",fact);   
}