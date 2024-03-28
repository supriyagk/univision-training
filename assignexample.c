#include <stdio.h>
#include <string.h>

struct product {
    char name[50];
    int item_number;
    int quantity;
    float price;
};

int main() {
    struct product items[5];
    strcpy(items[0].name, "Rice");
    items[0].quantity = 10;
    items[0].price = 15;

    strcpy(items[1].name, "Wheat");
    items[1].quantity = 15;
    items[1].price = 20.50;

    strcpy(items[2].name, "Biscuit");
    items[2].quantity = 20;
    items[2].price = 5.00;

    strcpy(items[3].name, "Juice");
    items[3].quantity = 12;
    items[3].price = 40.00;

    strcpy(items[4].name, "Lays");
    items[4].quantity = 8;
    items[4].price = 10.50;


    for (int i = 0; i < 5; i++) {
        printf("Item: %s\n", items[i].name);
        printf("Quantity: %d\n", items[i].quantity);
        printf("Price: %.2f\n", items[i].price);
        printf("\n");
    }

    return 0;
}
