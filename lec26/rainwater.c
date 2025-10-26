#include<stdio.h>
#include<stdlib.h>
int main()
{
    int height[5]={4,3,0,6,2};
    int small,total=0;
    int rightmax[5]={6,6,6,6,2};
    int leftmax[5]={4,4,4,6,6};
    for(int i=0;i<5;i++){
     
            if(leftmax[i]>rightmax[i]){
                small=rightmax[i];
            }
            else{
               small=leftmax[i];
            }   
            
                total=total+(small-height[i]);
        }
        printf("%d" ,total);
}