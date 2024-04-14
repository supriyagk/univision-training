#include <stdio.h>
#include <string.h>

// Structure to represent a fruit order
struct FruitOrder {
    char fruitName[20];
    float quantity;
    char unit[5];
    float pricePerUnit;
};

// Function to handle fruit ordering
void orderFruit(struct FruitOrder *order) {
    printf("Enter quantity for %s per %s: ", order->fruitName, order->unit);
    scanf("%f", &((*order).quantity));
    printf("%s (%.2f %s) Chosen Successfully.\n", order->fruitName, (*order).quantity, order->unit);
}

// Function to calculate total price
float calculateTotalPrice(struct FruitOrder *order) {
    return (*order).quantity * (*order).pricePerUnit;
}

// Function to display the menu and get user's choice
int getMenuOption() {
    int option;
    printf("Welcome To Organic Fruit Shop\n Menu:\n 1) Mango\n 2) Apple\n 3) Butterfruit\n 4) Strawberry\n 5) Litchi\n 6) exit\n enter your option: ");
    scanf("%d", &option);
    return option;
}

// Function to process payment
void processPayment(float totalPrice) {
    int paymentMode;
    printf("Total Price: ₹%.2f\n", totalPrice); // Updated to rupees symbol
    printf("Select Payment Mode:\n 1) Cash\n 2) Card\n");
    scanf("%d", &paymentMode);
    switch (paymentMode) {
        case 1:
            printf("Payment Successful.\n Thank you! Visit again.\n");
            break;
        case 2:
            printf("Card Payment Successful.\n Thank you! Visit again.\n");
            break;
        default:
            printf("Invalid Payment Mode. Payment Failed.\n");
    }
}

int main() {
    int MenuOption;
    struct FruitOrder order;
    float totalPrice;

    // Loop until the user chooses to exit
    do {
        MenuOption = getMenuOption();

        // Process the user's choice
        switch (MenuOption) {
            case 1:     // If the user selects Mango
                strcpy(order.fruitName, "Mango");
                strcpy(order.unit, "kg");
                order.pricePerUnit = 30.0; // Price per kg
                orderFruit(&order);
                totalPrice = calculateTotalPrice(&order);
                processPayment(totalPrice);
                break;
            case 2:     // If the user selects Apple
                strcpy(order.fruitName, "Apple");
                strcpy(order.unit, "kg");
                order.pricePerUnit = 50.0; // Price per kg
                orderFruit(&order);
                totalPrice = calculateTotalPrice(&order);
                processPayment(totalPrice);
                break;
            case 3:     // If the user selects Butterfruit
                strcpy(order.fruitName, "Butterfruit");
                strcpy(order.unit, "kg");
                order.pricePerUnit = 80.0; // Price per kg
                orderFruit(&order);
                totalPrice = calculateTotalPrice(&order);
                processPayment(totalPrice);
                break;
            case 4:     // If the user selects Strawberry
                strcpy(order.fruitName, "Strawberry");
                strcpy(order.unit, "box");
                order.pricePerUnit = 50.0; // Price per box
                orderFruit(&order);
                totalPrice = calculateTotalPrice(&order);
                processPayment(totalPrice);
                break;
            case 5:     // If the user selects Litchi
                strcpy(order.fruitName, "Litchi");
                strcpy(order.unit, "box");
                order.pricePerUnit = 60.0; // Price per box
                orderFruit(&order);
                totalPrice = calculateTotalPrice(&order);
                processPayment(totalPrice);
                break;
            case 6:     // If the user chooses to exit
                printf("Thank you visit again.\n");
                return 0;   // Exit the program
            default:    // If the user enters an invalid option
                printf("Invalid option\n");
                printf("Enter a valid option\n");
                printf("Choosing Fruits Failed\n");
        }
    } while (MenuOption != 6); // Continue looping until the user chooses to exit

    return 0;
}
