#include<stdio.h>
int main()
{
    int a[100] ,n,m;
    int check=1;
    printf("enter the size of array=");
    scanf("%d",&m);
    printf("enter the elements of array=");
    for(int i=0;i<m;i++)
    {
        scanf("%d",a[i]);
    }
    for(int j=0;j<n;j++)
    {
        if(a[j]!=a[n-1-j])
        check=0;
        break;
    }
    if(check==1)
    {
        printf("palindromeee");
    }
    else
    {
        printf("nottt a palindromeeee");
    }
    
      

}