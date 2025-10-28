#include<stdio.h>
int main(){  
    int a[100];
    int n;
    printf("enter no of elements =");
    scanf("%d" ,&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
   
    int start=0;
    int end=4;
    while(start<=end)
    {
        if(a[start]==0)
        {
            int temp=a[end];
            a[end]=a[start];
            a[start]=temp;
            end--;
        }
        else{
            start++;
        }
    }
    
    printf("sorted array is :\n");
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    return 0;
}