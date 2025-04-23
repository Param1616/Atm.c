#include <stdio.h>

// Initial balance (can be changed as needed)
float balance = 1000.0;

// Function to check balance
void checkBalance() {
    printf("Your current balance is: ₹%.2f\n", balance);
}

// Function to deposit money
void depositMoney() {
    float amount;
    printf("Enter amount to deposit: ₹");
    scanf("%f", &amount);
    
    if (amount > 0) {
        balance += amount;
        printf("₹%.2f deposited successfully.\n", amount);
    } else {
        printf("Invalid amount. Please enter a positive value.\n");
    }
}

// Function to withdraw money
void withdrawMoney() {
    float amount;
    printf("Enter amount to withdraw: ₹");
    scanf("%f", &amount);

    if (amount <= 0) {
        printf("Invalid amount. Please enter a positive value.\n");
    } else if (amount > balance) {
        printf("Insufficient balance! Cannot withdraw ₹%.2f\n", amount);
    } else {
        balance -= amount;
        printf("₹%.2f withdrawn successfully.\n", amount);
    }
}

// Function to show menu
void showMenu() {
    printf("\n========= ATM Menu =========\n");
    printf("1. Check Balance\n");
    printf("2. Deposit Money\n");
    printf("3. Withdraw Money\n");
    printf("4. Exit\n");
    printf("============================\n");
    printf("Enter your choice: ");
}

// Main function
int main() {
    int choice;
    int running = 1; // To control the loop

    while (running) {
        showMenu();
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                checkBalance();
                break;
            case 2:
                depositMoney();
                break;
            case 3:
                withdrawMoney();
                break;
            case 4:
                printf("Thank you for using the ATM. Goodbye!\n");
                running = 0;
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}
