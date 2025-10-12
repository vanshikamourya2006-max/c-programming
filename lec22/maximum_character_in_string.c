#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    printf("enter a string=");
    scanf(" %s",&str);
    int len = strlen(str);
    int freq[256] = {0};
    char result;
    int max = 0;
    for (int i = 0; i < len; i++)
    {
        freq[str[i]]++;
    }
    for (int i = 0; i < len; i++)
    {
        if (freq[str[i]] > max)
        {
            max = freq[str[i]];
           result = str[i];
        }
    }

    printf("maximum character = %c -> %d times" , result,max);
}