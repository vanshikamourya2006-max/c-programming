#include<stdio.h>
int main()
{
    int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int b[3][3]={{10,11,12},{13,14,15},{16,17,20}};
    int max=0;
    for ( int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(max<a[i][j])
            {
                max=a[i][j];

            }
            if(max<b[i][j])
            {
                max=b[i][j];
            }
        }
    }
    printf("%d",max);
    
}