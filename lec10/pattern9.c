include<stdio.h>
int main()
{
    for(int i=0;i<5;i++)
    {
        for ( int j=0;j<i;j++)
        {
            printf(" * ");
        }
        for(int k=5;k>i+1;k--)
        {
            printf("   ");
        }
        for(int l=5;l>i+1;l--)
        {
            printf("   ");
        }
        for(int h=0;h<i;h++)
        {
            printf(" * ");
        }
        printf("\n");
    }
}