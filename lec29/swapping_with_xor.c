#include<stdio.h>
int main(){
    int a=5;
    int b=3;
    printf("value of a=%d\n",a);
    printf("value of b=%d\n",b);
    a=a^b;
    b=a^b;
    a=a^b;
    printf("after swapping value of a=%d\n" ,a);
    printf("after swapping value of b=%d\n" ,b);
    return 0;
}