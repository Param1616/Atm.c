# Simple C ATM Simulation

This is a simple command-line application written in C that simulates basic ATM functionalities: checking balance, depositing money, and withdrawing money.

## Features

*   **Check Balance:** Displays the current account balance.
*   **Deposit Money:** Allows the user to add funds to the account.
*   **Withdraw Money:** Allows the user to withdraw funds, checking for sufficient balance.
*   **Exit:** Quits the application.

## Initial Balance

The initial balance is set to ₹1000.00. You can modify the `balance` variable in the code to change the starting amount.

## Code Structure

*   `balance`: A global float variable storing the current account balance.
*   `checkBalance()`: Function to print the current balance.
*   `depositMoney()`: Function to handle deposits.
*   `withdrawMoney()`: Function to handle withdrawals and check for insufficient funds.
*   `showMenu()`: Function to display the main menu options.
*   `main()`: The main function that runs the ATM loop, displays the menu, takes user input, and calls the appropriate functions based on the choice.