#include <stdio.h>

int main()
{
    int balance, withdrawal;

    printf("Enter balance: ");
    scanf("%d", &balance);

    printf("Enter withdrawal amount: ");
    scanf("%d", &withdrawal);

    if (withdrawal % 500 == 0 &&
        withdrawal <= balance &&
        withdrawal <= 25000)
    {
        balance = balance - withdrawal;

        printf("Withdrawal successful.\n");
        printf("Remaining balance: %d", balance);
    }
    else
    {
        if (withdrawal % 500 != 0)
        {
            printf("Amount must be a multiple of 500.");
        }
        else if (withdrawal > balance)
        {
            printf("Insufficient balance.");
        }
        else if (withdrawal > 25000)
        {
            printf("Daily withdrawal limit exceeded.");
        }
    }

    return 0;
}
