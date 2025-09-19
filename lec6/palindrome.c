#include<stdio.h>
int main()
{
    int result=0,lastdigit,n,b;
    printf("enter a no=");
    scanf("%d" ,&n);
    n=b;
    while(n>0)
    {
        lastdigit=n%10;
        result= result*10+lastdigit;
        n=n/10;
      }
      if(result==b)
      {
        printf("%d is a palindrome",result);
      }
       else
       {
       printf("%d is not a palindrome",result);
       }
      return 0;
}