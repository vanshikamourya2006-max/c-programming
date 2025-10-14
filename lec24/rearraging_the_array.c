#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    printf("enter the size of the array=");
    scanf("%d", &n);
    int *a = (int *)malloc(n * sizeof(int));
    printf("enter %d elements of the array=\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int countpos = 0, countneg = 0, countzero = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 0)
        {
            countzero++;
        }
        else if (a[i] > 0)
        {
            countpos++;
        }
        else
        {
            countneg++;
        }
    }

    int pos[countpos];
    int neg[countneg];
    int zero[countzero];
    int storepos = 0, storeneg = 0, storezero = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 0)
        {

            zero[storezero] = a[i];
            storezero++;
        }
        else if (a[i] > 0)
        {
            pos[storepos] = a[i];
            storepos++;
        }
        else
        {
            neg[storeneg] = a[i];
            storeneg++;
        }
    }
        
        int ans[countzero + countpos + countneg];
        int x = 0;
        for (int i = 0; i < countzero; i++)
        {
            ans[x] = zero[i];
            x++;
        }
        for (int i = 0; i < countneg; i++)
        {
            ans[x] = neg[i];
            x++;
        }
        for (int i = 0; i < countpos; i++)
        {
            ans[x] = pos[i];
            x++;
        }
    
        for (int i = 0; i < countzero + countpos + countneg; i++)
        {
            printf("%d ", ans[i]);
        }
    }

    

