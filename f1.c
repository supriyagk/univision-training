#include <stdio.h>
#include <string.h>

// Define a structure for the fruit
typedef struct {
    char name[20];
    int price;
} Fruit;

// Function to select and order fruits
void orderFruits(Fruit *fruits) {
    int MenuOption; // Variable for selecting option;
    int quantity;   // Variable to store the quantity of fruits

    do {
        printf("Welcome To Organic Fruit Shop\n Menu:\n 1) Mango\n 2) Apple\n 3) Butterfruit\n 4) Strawberry\n 5) Litchi\n 6) exit\n enter your option: ");
        scanf("%d", &MenuOption);

        switch (MenuOption) {
            case 1:
                printf("Enter quantity for Mango per kg: ");
                scanf("%d", &quantity);
                strcpy(fruits[0].name, "Mango");
                fruits[0].price = quantity;
                printf("Mango (%d) Chosen Successfully.\n", quantity);
                break;
            case 2:
                printf("Enter quantity for Apple per kg: ");
                scanf("%d", &quantity);
                strcpy(fruits[1].name, "Apple");
                fruits[1].price = quantity;
                printf("Apple (%d) Chosen Successfully.\n", quantity);
                break;
            case 3:
                printf("Enter quantity for Butterfruit per kg: ");
                scanf("%d", &quantity);
                strcpy(fruits[2].name, "Butterfruit");
                fruits[2].price = quantity;
                printf("Butterfruit (%d) Chosen Successfully.\n", quantity);
                break;
            case 4:
                printf("Enter quantity for Strawberry per box: ");
                scanf("%d", &quantity);
                strcpy(fruits[3].name, "Strawberry");
                fruits[3].price = quantity;
                printf("Strawberry (%d) Chosen Successfully.\n", quantity);
                break;
            case 5:
                printf("Enter quantity for Litchi per box: ");
                scanf("%d", &quantity);
                strcpy(fruits[4].name, "Litchi");
                fruits[4].price = quantity;
                printf("Litchi (%d) Chosen Successfully.\n", quantity);
                break;
            case 6:
                printf("Thank you visit again.\n");
                return; // Exit the function
            case 7:
                printf("Invalid option\n");
                printf("Enter Valid option\n");
                printf("Choosing Fruits Failed\n");
                break;
            default:
                printf("Invalid option\n");
                printf("Enter a valid option\n");
                printf("Choosing Fruits Failed\n");
        }
    } while (MenuOption != 6);
}

int main() {
    // Define an array of fruit structures
    Fruit fruits[5];

    // Call the function to order fruits
    orderFruits(fruits);

    return 0;
}
