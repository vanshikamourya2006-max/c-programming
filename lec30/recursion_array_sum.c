#include<stdio.h>
int arraysum(int arr[] ,int x){
    if(x==0){
        return 0;
    }
    return arr[x-1]+arraysum(arr,x-1);
}
int main(){
    int arr[5]={1,2,3,4,5};
    int data=arraysum(arr,5);
    printf("%d",data);
}