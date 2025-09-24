#include<stdio.h>
int main()
{
    int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int top=0,left=0;
    int bottom=2,right=2;
    for(int i=0;i<3;i++)
    {
        printf("%d " ,a[top][i]);
    }
    top++;
    for(int i=top;i<=bottom;i++)
    {
        
        printf("%d " ,a[i][right]);
    }
    right--;
    for(int i=bottom;i>=top;i--)
    {
        
        printf("%d " ,a[i][left]);
    }
    left++;
    for(int i=left;i<=right;i++)
    {
        
        printf("%d " ,a[right][i]);
    }
}
