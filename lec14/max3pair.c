#include<stdio.h>
int main()
{
    int a[100] ,n;
    int max=0;
    int l=3;
    printf("enter the size of array=");
    scanf("%d",&n);
    printf("enter the elements of array=\n");
    for(int r=0;r<n;r++)
    {
        scanf("%d",&a[r]);
    }
    for(int i=0;i<n-l;i++)
    {
        int sum=0;
        for(int j=0;j<i+l;j++)
        {
        
            sum=sum+a[j];
        }
        if(sum>max)
        {
        max=sum;
        }
    }
    printf("%d" ,max);
}