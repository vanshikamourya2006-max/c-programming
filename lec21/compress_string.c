#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    printf("enter a string=");
    scanf("%s" ,str);
     int freq[256]={0};
    int len =strlen(str);

    for(int i=0;i<len;i++)
    {
        freq[str[i]]++;
    }
    for(int i=0;i<256;i++)
    {
        if(freq[i]>0)
        printf("%c%d",i ,freq[i]);
    }



}