#include<stdio.h>
#include<string.h>
int main()
{
    char str1[100];
    char str2[100];
    printf("enter first string=");
    scanf("%s" ,str1);
   
    char target= 'a';
    int len1=strlen(str1);
    int len2=strlen(str2);
   

    for(int i=0;i<len1;i++ )
    {
         if(str1[i]==target)
      {
        str1[i]='\0';
      }
    }
    for(int i=0;i<len1;i++ )
    {
        str2[i]=str1[i];
    }
     for(int i=0;i<len1;i++ )
     {
        printf("%c" ,str2[i]);
     }
  
}
