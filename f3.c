#include <stdio.h>
#include <string.h>

// Structure to represent a fruit order
struct FruitOrder {
    char fruitName[20];
    int quantity;
};

// Function to handle fruit ordering
void orderFruit(const char *fruit, int *quantity) {
    printf("Enter quantity for %s: ", fruit);
    scanf("%d", quantity);
    printf("%s (%dkg) Chosen Successfully.\n", fruit, *quantity);
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
                orderFruit(order.fruitName, &order.quantity);
                break;
            case 2:
                strcpy(order.fruitName, "Apple");
                orderFruit(order.fruitName, &order.quantity);
                break;
            case 3:
                strcpy(order.fruitName, "Butterfruit");
                orderFruit(order.fruitName, &order.quantity);
                break;
            case 4:
                strcpy(order.fruitName, "Strawberry");
                orderFruit(order.fruitName, &order.quantity);
                break;
            case 5:
                strcpy(order.fruitName, "Litchi");
                orderFruit(order.fruitName, &order.quantity);
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
