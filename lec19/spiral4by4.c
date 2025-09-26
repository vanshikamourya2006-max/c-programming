#include<stdio.h>
int main()
{
    int a[4][4]={{1,2,3,4},
    {5,6,7,8},
    {9,10,11,12},
    {13,14,15,16}};
    int top=0,left=0;
    int bottom=3,right=3;
    while(top<bottom && left<right)
    {
        for(int i=left; i<=right; i++)
        {
            printf("%d " ,a[top][i]);
        }
         top++;
    for(int i=top;i<=bottom;i++)
    {
        printf("%d ",a[i][right]);
    }
    right--;
    for (int i=right;i>=left;i--) 
    {
                printf("%d ", a[bottom][i]);
            }
    bottom--;
    for (int i=bottom;i>=top;i--)
    {
        printf("%d ", a[i][left]);
    }
    left++;
 
}
}
    
