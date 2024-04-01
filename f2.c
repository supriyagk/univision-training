#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define a structure for the fruit
typedef struct {
    char name[20];
    char unit[20];
} Fruit;

// Function prototypes
void displayMenu();
int selectOption();
void orderFruit(int option, int quantity, Fruit *fruits);
void printConfirmation(int option, int quantity, Fruit *fruits);

int main() {
    int MenuOption; // Variable for selecting option;
    int quantity;   // Variable to store the quantity of fruits

    // Define the array of fruits
    Fruit fruits[] = {
        {"Mango", "kg"},
        {"Apple", "kg"},
        {"Butterfruit", "kg"},
        {"Strawberry", "box"},
        {"Litchi", "box"}
    };

    do {
        displayMenu();
        MenuOption = selectOption();

        if (MenuOption >= 1 && MenuOption <= 5) {
            printf("Enter quantity for %s per %s: ", fruits[MenuOption - 1].name, fruits[MenuOption - 1].unit);
            scanf("%d", &quantity);
            orderFruit(MenuOption, quantity, fruits);
        } else if (MenuOption == 6) {
            printf("Thank you. Visit again.\n");
        } else {
            printf("Invalid option. Please enter a valid option.\n");
        }
    } while (MenuOption != 6);

    return 0;
}

// Function to display the menu
void displayMenu() {
    printf("Welcome To Organic Fruit Shop\n Menu:\n");
    printf(" 1) Mango\n 2) Apple\n 3) Butterfruit\n 4) Strawberry\n 5) Litchi\n 6) exit\n");
    printf("Enter your option: ");
}

// Function to select an option
int selectOption() {
    int option;
    scanf("%d", &option);
    return option;
}

// Function to order a fruit
void orderFruit(int option, int quantity, Fruit *fruits) {
    printf("%s (%d %s) Chosen Successfully.\n", fruits[option - 1].name, quantity, fruits[option - 1].unit);
}

// Function to print the order confirmation
void printConfirmation(int option, int quantity, Fruit *fruits) {
    printf("%s (%d %s) Chosen Successfully.\n", fruits[option - 1].name, quantity, fruits[option - 1].unit);
}
