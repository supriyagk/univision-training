#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "FruitOrder.h"

// Function prototypes
void saveOrderHistory(struct FruitOrder* order, float totalPrice, enum PaymentMethod paymentMethod);

int main() {
    int menuOption;
    struct FruitOrder *order = malloc(sizeof(struct FruitOrder));
    float totalPrice;
    enum PaymentMethod paymentMethod;

    if (order == NULL) {
        fprintf(stderr, "Memory allocation failed\n");
        return 1;
    }

    // Loop until the user chooses to exit
    do {
        menuOption = getMenuOption();

        // Process the user's choice
        switch (menuOption) {
            case 1:
                strcpy(order->fruitName, "Mango");
                strcpy(order->unit, "kg");
                order->pricePerUnit = 30.0;
                orderFruit(order);
                break;
            case 2:
                strcpy(order->fruitName, "Apple");
                strcpy(order->unit, "kg");
                order->pricePerUnit = 50.0;
                orderFruit(order);
                break;
            case 3:
                strcpy(order->fruitName, "Butterfruit");
                strcpy(order->unit, "kg");
                order->pricePerUnit = 80.0;
                orderFruit(order);
                break;
            case 4:
                strcpy(order->fruitName, "Strawberry");
                strcpy(order->unit, "box");
                order->pricePerUnit = 50.0;
                orderFruit(order);
                break;
            case 5:
                strcpy(order->fruitName, "Litchi");
                strcpy(order->unit, "box");
                order->pricePerUnit = 60.0;
                orderFruit(order);
                break;
            case 6:
                printf("Thank you, visit again.\n");
                free(order);
                return 0;
            default:
                printf("Invalid option.\n");
                printf("Enter a valid option.\n");
                continue;
        }

        if (order->quantity <= 0) {
            printf("Order quantity must be positive. Please try again.\n");
            continue;
        }

        // Calculate the total price
        totalPrice = calculateTotalPrice(order);

        // Display total price
        printf("Total Price: %.2f Rupees\n", totalPrice);

        // Get the payment method
        paymentMethod = getPaymentMethod();

        // Validate the payment method
        if (validatePayment(paymentMethod)) {
            // Process the payment
            processPayment(totalPrice, paymentMethod);

            // Save order history
            saveOrderHistory(order, totalPrice, paymentMethod);
        } else {
            printf("Invalid payment method. Please try again.\n");
        }

    } while (menuOption != 6);

    free(order);
    return 0;
}

// Function to save order history to a file
void saveOrderHistory(struct FruitOrder* order, float totalPrice, enum PaymentMethod paymentMethod) {
    FILE *file = fopen("order_history.txt", "a");
    if (file == NULL) {
        fprintf(stderr, "Error opening file for writing\n");
        return;
    }

    const char* paymentMethods[] = {"Cash", "Card", "UPI", "Invalid"};
    fprintf(file, "Fruit: %s, Quantity: %.2f %s, Total Price: %.2f, Payment Method: %s\n",
            order->fruitName, order->quantity, order->unit, totalPrice, paymentMethods[paymentMethod]);

    fclose(file);
}
