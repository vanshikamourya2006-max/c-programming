#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    printf("enter a string=");
    scanf("%s" ,str);
    int len=strlen(str);
    int count=0;
    char freq[256]={0};

    for(int i=0;i<len;i++)
    {
        freq[str[i]]++;
    }
      for(int i=0;i<len;i++)
      {
        if(freq[str[i]]==1)
        {
            printf("%c" ,str[i]);
            break;
        }
      }

}