#include <stdio.h>
int swap(int *a,int *b)
{
  *a = *a + *b;   
  *b = *a - *b;   
  *a = *a - *b;
}
int main()
 {
    int a = 5, b = 10;
    int c=swap(&a,&b);
    printf("After swapping: a = %d, b = %d\n", a, b);
 }
