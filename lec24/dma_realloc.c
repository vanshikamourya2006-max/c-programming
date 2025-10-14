
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    printf("enter the size of the array=");
    scanf("%d",&n);
    int *a=(int *)realloc(n, sizeof(int));
    printf("enter %d elements of the array=\n" ,n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
     for(int i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
   
}