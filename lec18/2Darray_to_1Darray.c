#include<stdio.h>
int main()
{
    int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int b[9];
    int k=0;
   for(int i=0;i<3;i++)
   {
    for(int j=0;j<3;j++)
    {
        
            b[k]=a[i][j];
            k++;
    }
}
for(int a=0;a<9;a++)
{

    printf("%d ",b[a]);
}      

}