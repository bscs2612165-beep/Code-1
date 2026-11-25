#include <stdio.h>
#include <stdlib.h>

int main()
{
    int withdraw,Exit,choice,Nwithdraw;
    int balance = 1000,deposit; // chnages and doing pratice of fork prolly he will ask


do{
          printf("--------Al-Meezan Bank-------\n");
    printf("1. Deposit\n");
    printf("2. Withdraw\n");
    printf("3. Exit\n");
    scanf("%d",&choice);

    switch(choice)
    {
case 1:
      printf("How much money are you going to deposit sir?\n");
      scanf("%d",&deposit);
if (deposit > 0)
{
   balance = balance + deposit;
    printf("Your balance is %d\n",balance);
}
else
{
    printf("Invalid deposit money dude");
}



      break;

case 2:
    printf("How much money you want to withdraw sir?\n");
    scanf("%d",&Nwithdraw);
    if(Nwithdraw > balance)
    {
        printf("Insufficient balance");
    }
    else {
            withdraw = balance - Nwithdraw;
    printf("This is your withdraw %d\n",withdraw);
    }

break;
case 3:
    printf("Thank you for coming! \n");
    break;

default:
    printf("invalid gng");

    }


    }
        while(choice != 3);
    return 0;
}
