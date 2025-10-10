#include<stdio.h>
int  main()
{
    int n;
    int a[100];
    int m=0;
    printf("enter no of elements =");
    scanf("%d" ,&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int sum=0;
    int originalsum=1;
     for (int i=0;i<n;i++)
     {
        sum= sum+a[i];
     }   
     originalsum=((n+1)*(n+2))/2;
     m=originalsum-sum;
     printf(" missing no is %d" ,m);

}