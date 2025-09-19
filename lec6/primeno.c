#include<stdio.h>
int main()
{
    int i,n;
    printf("enter a no=");
    scanf("%d",&n);
    for(i=2;i<n;i++)
     {
        if(n%i==0)
        {
            printf("not a prime");
            break;
        }
        else{
            printf("is a prime");
            break;
        }
    
     }
       return 0;
    }