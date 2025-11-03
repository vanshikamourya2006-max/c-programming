#include<stdio.h>
int fibonacci(int x){
if(x==0){
    return 0;
}
    else if(x==1){
        return 1;
    }

  return fibonacci(x-1)+fibonacci(x-1);
}

int main(){
    int data=fibonacci(5);
    for(int i=0;i<5;i++){

        printf("%d\n",data);
    }
    
}