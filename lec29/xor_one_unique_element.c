#include<stdio.h>
int main()
{
    int a[5]={11,3,11,3,2};
    int xor=0;
    for(int i=0;i<5;i++){
        xor=xor^a[i]; //^ xor operator
    }
    printf("%d ",xor);
}