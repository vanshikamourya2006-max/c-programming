#include<stdio.h>
int main(){
    int a[4]={1,3,4,5};
    int result=0;
    int xor=0;
    int xorarray=0;
    for(int i=0;i<=5;i++){
        xor=xor^i;
    }
    for(int i=0;i<4;i++){
        xorarray=xorarray^a[i];
    }
    result=xor^xorarray;
    printf("%d",result);
}