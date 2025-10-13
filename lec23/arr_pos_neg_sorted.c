#include<stdio.h>
int main()
{
    int a[8]={-5,5,3,-4,7,8,1,-2};
    int negative[3];
    int positive[5];
    int ans[8];
    int j=0,k=0;
    for(int i=0;i<8;i++)
    {
        if(a[i]<0)
        {
            negative[j]=a[i];
            j++;
        }
        else
        {
            positive[k]=a[i];
            k++;
        }
    }
    int index=0;
    for (int i=0;i<j;i++)
    {
        ans[index]=negative[i];
        index++;
    }       
    for(int j=0;j<k;j++)
    {
        ans[index]=positive[j];
        index++;
    }
    for(int l=0;l<8;l++)
    {
        printf("%d\n",ans[l]);
    }
}