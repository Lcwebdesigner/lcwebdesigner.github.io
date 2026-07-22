#include <stdio.h>

int main()
{
    float balance = 1000;
    int choice;
    float amount;


    while(1)
    {
        printf("\n--- Banking System ---");
        printf("\n1. Check Balance");
        printf("\n2. Deposit");
        printf("\n3. Withdraw");
        printf("\n4. Exit");

        printf("\nChoose: ");
        scanf("%d",&choice);


        switch(choice)
        {
            case 1:
                printf("Balance: %.2f\n", balance);
                break;


            case 2:
                printf("Enter amount: ");
                scanf("%f",&amount);

                balance += amount;

                printf("Deposit successful\n");
                break;


            case 3:
                printf("Enter amount: ");
                scanf("%f",&amount);

                if(amount <= balance)
                {
                    balance -= amount;
                    printf("Withdrawal successful\n");
                }
                else
                    printf("Insufficient balance\n");

                break;


            case 4:
                return 0;


            default:
                printf("Invalid choice");
        }
    }

    return 0;
}
