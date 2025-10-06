#include <stdio.h>
#include <string.h>
int main()
{
    char str[] = "toffiieenn";
    int len = strlen(str);
    for (int i = 0; i < len; i++)
    {
        for (int j = i + 1; j < len; j++)
        {
            if (str[i] == str[j])
            {
                str[i]='\0';
                str[j]='\0';
            }
        }
    }
    for (int i = 0; i < len; i++)
    {
        printf("%c" ,str[i]);
    }
}