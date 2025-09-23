#include<stdio.h>
int main()
{
    int a[5]={1,2,3,4,5};
    int b[5]={1,2,3,4,5};
     int *p1=a;
     int *p2=b;
     int flag=1;
     for(int i=0;i<5;i++)
     {
        if((*p1+i)!=*(p2+i))
        {
            flag=0;
            break;
        }
     }
     if(flag==0)
     printf("sameeeee");
}