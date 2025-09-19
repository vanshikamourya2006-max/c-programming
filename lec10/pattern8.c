/*
*      *
**    **
***  ***
********
********
***  ***
**    **
*      *
 */
#include<stdio.h>
int main()
{
    for(int i=0;i<5;i++)
    {
        for ( int j=0;j<i;j++)
        {
            printf("*");
        }
        for(int k=5;k>i+1;k--)
        {
            printf(" ");
        }
        for(int l=5;l>i+1;l--)
        {
            printf(" ");
        }
        for(int h=0;h<i;h++)
        {
            printf("*");
        }
        printf("\n");
    }
    for(int a=0;a<5;a++)
    {
        for(int f=4;f>a;f--)
        {
            printf("*");
        }
        for(int d=0;d<a;d++)
        {
            printf(" ");
        }
        for(int r=0;r<a;r++)
        {
            printf(" ");
        }
        for(int c=4;c>a;c--)
        {
            printf("*");
        }
        printf("\n");
    }
}