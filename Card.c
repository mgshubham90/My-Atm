#include <stdio.h>
#include <string.h>

// Predefined card number and PIN for simulation
#define CARD_NUMBER "1234567890123456"
#define PIN "1234"

int main() {
    char enteredCardNumber[17]; // 16 digits + null terminator
    char enteredPIN[5];         // 4 digits + null terminator
    int attempts = 3;           // Number of attempts allowed

    printf("Welcome to ATM Card Verifier\n");

    while (attempts > 0) {
        printf("\nPlease enter your card number: ");
        scanf("%16s", enteredCardNumber); // Limit input to 16 characters

        printf("Please enter your PIN: ");
        scanf("%4s", enteredPIN); // Limit input to 4 characters

        // Verify card number and PIN
        if (strcmp(enteredCardNumber, CARD_NUMBER) == 0 && strcmp(enteredPIN, PIN) == 0) {
            printf("\nAccess Granted. Welcome to the ATM system!\n");
            break;
        } else {
            attempts--;
            printf("\nInvalid card number or PIN. Attempts remaining: %d\n", attempts);

            if (attempts == 0) {
                printf("Access Denied. Please contact customer service.\n");
            }
        }
    }

    return 0;
}
