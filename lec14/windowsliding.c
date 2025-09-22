#include <stdio.h>
int main()
 {
    int n, k = 3;
    int a[100];
    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(int i=0; i<n; i++) 
    scanf("%d", &a[i]);

    int sum = 0, maxSum = 0;

   
    for(int i=0; i<k; i++) sum += a[i];
    maxSum = sum;

   
    for(int i=k; i<n; i++) {
        sum += a[i] - a[i-k];  
        if(sum > maxSum) maxSum = sum;
    }

    printf("Maximum sum of %d consecutive elements = %d\n", k, maxSum);
    return 0;
}