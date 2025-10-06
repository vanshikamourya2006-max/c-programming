#include <stdio.h>
int main()
{
    char str[] = "icecream";
    char newstr[10];
    for (int i = 0; str[i] != '\0'; i++)
    {
        newstr[i]= str[i];
    }
    for (int i = 0; str[i] != '\0'; i++)
    {

        printf("%c", newstr[i]);
    }
}