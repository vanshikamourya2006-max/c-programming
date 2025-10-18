#include<stdio.h>
#include<stdlib.h>
int main(){
int height[5]={1,2,3,4,5};
int i=0;
int j=4;
int maxarea=0;
    while(i<j){
        int h;
        if(height[i]<height[j]){
            h=height[i];
        }
        else{
            h=height[j];
        }
        int w=j-i;
        int area=h*w;
        if(area>maxarea){
            maxarea=area;
        }
        if(height[i]<height[j]){
            i++;
        }
        else{
            j++;
        }
        
    }
    printf("%d",maxarea);

}