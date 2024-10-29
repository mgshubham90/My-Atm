#include <stdio.h>

int main() {
    int choice;
    float balance = 1000.0;  // Initial balance
    float depositAmount, withdrawAmount;

    while (1) {
        // ATM menu
        printf("\nATM System\n");
        printf("1. Check Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                // Check balance
                printf("\nYour current balance is: $%.2f\n", balance);
                break;

            case 2:
                // Deposit money
                printf("\nEnter amount to deposit: ");
                scanf("%f", &depositAmount);
                if (depositAmount > 0) {
                    balance += depositAmount;
                    printf("Deposit successful! New balance: $%.2f\n", balance);
                } else {
                    printf("Invalid deposit amount.\n");
                }
                break;

            case 3:
                // Withdraw money
                printf("\nEnter amount to withdraw: ");
                scanf("%f", &withdrawAmount);
                if (withdrawAmount > 0 && withdrawAmount <= balance) {
                    balance -= withdrawAmount;
                    printf("Withdrawal successful! New balance: $%.2f\n", balance);
                } else if (withdrawAmount > balance) {
                    printf("Insufficient balance!\n");
                } else {
                    printf("Invalid withdrawal amount.\n");
                }
                break;

            case 4:
                // Exit
                printf("Thank you for using our ATM. Goodbye!\n");
                return 0;

            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}
