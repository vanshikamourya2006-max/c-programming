#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int flag;
  
    printf("enter a string=");
    scanf("%s" ,str);
   
    char substr[100];
     printf("enter a substring you want to found=");
     scanf("%s" ,substr);
    int len=strlen(str);
    int sublen=strlen(substr);
   
   

    for(int i=0;i<len;i++ )
    {
       for(int j=0;j<sublen;j++)
       {
           if(str[i]==substr[j])
        {
           flag=1;
        }

       }
    }
    if(flag==1)
    {
        printf("found");
    }
    else
    {
       printf("not found");
    }
}
