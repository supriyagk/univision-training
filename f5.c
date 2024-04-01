#include <stdio.h>
#include <string.h>

// Structure to represent a fruit order
struct FruitOrder {
    char fruitName[20];
    float quantity;
    char unit[5]; // New member to store the unit
};

// Function to handle fruit ordering
void orderFruit(const char *fruit, float *quantity, const char *unit) {
    printf("Enter quantity for %s per %s: ", fruit, unit);
    scanf("%f", quantity);
    printf("%s (%.2f %s) Chosen Successfully.\n", fruit, *quantity, unit);
}

// Function to display the menu and get user's choice
int getMenuOption() {
    int option;
    printf("Welcome To Organic Fruit Shop\n Menu:\n 1) Mango\n 2) Apple\n 3) Butterfruit\n 4) Strawberry\n 5) Litchi\n 6) exit\n enter your option: ");
    scanf("%d", &option);
    return option;
}

int main() {
    int MenuOption; // Variable for selecting option;
    struct FruitOrder order;

    do {
        MenuOption = getMenuOption();

        switch (MenuOption) {
            case 1:
                strcpy(order.fruitName, "Mango");
                strcpy(order.unit, "kg"); // Set the unit
                orderFruit(order.fruitName, &order.quantity, order.unit);
                break;
            case 2:
                strcpy(order.fruitName, "Apple");
                strcpy(order.unit, "kg");
                orderFruit(order.fruitName, &order.quantity, order.unit);
                break;
            case 3:
                strcpy(order.fruitName, "Butterfruit");
                strcpy(order.unit, "kg");
                orderFruit(order.fruitName, &order.quantity, order.unit);
                break;
            case 4:
                strcpy(order.fruitName, "Strawberry");
                strcpy(order.unit, "box");
                orderFruit(order.fruitName, &order.quantity, order.unit);
                break;
            case 5:
                strcpy(order.fruitName, "Litchi");
                strcpy(order.unit, "box");
                orderFruit(order.fruitName, &order.quantity, order.unit);
                break;
            case 6:
                printf("Thank you visit again.\n");
                return 0; // Exit the program
            default:
                printf("Invalid option\n");
                printf("Enter a valid option\n");
                printf("Choosing Fruits Failed\n");
        }
    } while (MenuOption != 6); // Loop until a valid option is entered

    return 0;
}

