#include <stdio.h>
#include<string.h>
int main()
{
    char str[] = "mada";
    int len=strlen(str);
    int flag=1;
    for(int i=0; i<len/2;i++)
    {
        if(str[i]!=str[len-1-i])
        {
            flag=0;
        }
    }
    if(flag==1)
    {
        printf("PALINDROME");
    }
    else if(flag==0)
    {
        printf("NOT A PALINDROME");
    }
    

}