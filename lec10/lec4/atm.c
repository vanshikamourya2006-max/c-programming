//mini atm
#include<stdio.h>
int main()
{
    int choice;
    float amt, balance=1000;
    
    printf("enter your choice:\n1.show balance \n2.withdrawl \n3.deposit \n4.exit");
    scanf("%d",&choice);

    switch(choice)
    {
        case 1: printf("current balance=%f",balance);
        break;
        case 2: printf("enter amount to withdrawl=");
                scanf("%f" ,&amt);
                if(amt <= 1000)
                {
                  balance -= amt;
                  printf("withdrawl succesfully \nnew balance=%f" ,balance);
                }
                else
                printf("insufficent balance");
                break;
        case 3: printf("enter amount to deposit=");
                scanf("%f" ,&amt);
                balance += amt;
                printf("amount deposited succesfully \nnew balance=%f" ,balance);
                break;
        case 4: printf("thankyou \nexiting.....");              

    }
    return 0;
    
}