#include<stdio.h>
int main()
{
    int a[5]={1,5,7,3,6};
    int n;
    printf("enter the element to search=");
    scanf("%d" ,&n);
    for(int i=0;i<5;i++)
    {
        if(a[i]==n)
        {
            printf("found %d at index a[%d]" ,n,i);
            break;
        }
        else 
        {
        printf("not found %d" ,n);
        }
    }
    return 0;
}   