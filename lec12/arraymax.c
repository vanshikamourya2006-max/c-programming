#include<stdio.h>
int main()
{
    int a[5]={1,5,7,3,6};
    int max=a[0];
    for(int i=0;i<5;i++)
    {
        if(max<a[i])
        {
            max=a[i];
        }
    }
    printf("%d" ,max);
    return 0;
}   