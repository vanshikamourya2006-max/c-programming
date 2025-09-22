#include<stdio.h>
int main()
{
    int a[100] ,n;
    printf("enter the size of array=");
    scanf("%d",&n);
    printf("enter the elements of array=\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int first=a[0];
    for(int j=0;j<n;j++)
    {
        a[j]=a[j+1];
    }
    a[n-1]=first;
    for(int k=0;k<n;k++)
    {
    printf("sorted array is %d\n",a[k]);
    }
}