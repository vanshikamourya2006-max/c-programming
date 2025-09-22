#include<stdio.h>
int main()
{
    int a[7]={2,-5,-7,3,8,3,8};
    int maxsum=0;
    int cursum=0;
    for (int j=0;j<7;j++)
    {
        if(cursum<0)
        {
        cursum=0;
        }
        else
       {
     cursum=cursum+a[j];
       }
        if(cursum>maxsum)
        {
            maxsum=cursum;
        }

    }
    printf("%d",maxsum);
}
