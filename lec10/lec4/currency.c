//currency converter
#include<stdio.h>
int main()
{
    int choice;
    float amt;
    printf("1.USD\n2.AUD\n3.YEN\n4.POUND\nChoose Currency to covert in(1-4:)");
    scanf("%d" , &choice);
    printf("enter the amount of rupees=");
    scanf("%f" , &amt);

    switch(choice)
    {
     case 1:printf("%d INR = %f USD",amt,(float)amt/88.5); //type casting
     break;
     case 2:printf("%d INR = %f AUD",amt,(float)amt/57.54);
     break;
     case 3:printf("%d INR = %f YEN",amt,(float)amt*1.667);
     break;
     case 4:printf("%d INR = %f POUND",amt,(float)amt/117.13);
     break;
     default: printf("INVALID choice:\n");
    }
return 0;
} 