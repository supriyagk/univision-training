#include<stdio.h>

struct Fruit {
    char FruitName[50];
    int Quantity;
    float Price;
};

int main() {
    struct Fruit Mango;
    struct Fruit Apple;

    printf("Enter Fruitname : ");
    scanf("%s", Mango.FruitName);
    printf("Enter Quantity : ");
    scanf("%d", &Mango.Quantity);
    printf("Enter Price : ");
    scanf("%f", &Mango.Price);

    printf("\nEnter Fruitname : ");
    scanf("%s", Apple.FruitName);
    printf("Enter Price : ");
    scanf("%d", &Apple.Price);
    printf("Enter Price : ");
    scanf("%f", &Apple.Price);

    printf("\nDisplaying information for Mango:\n");
    printf("FruitName: %s\n", Mango.FruitName);
    printf("Quantity: %d\n", Mango.Quantity);
    printf("Price: %.2f\n", Mango.Price);

    printf("\nDisplaying information for Apple:\n");
    printf("FruitName: %s\n", Apple.FruitName);
    printf("Quantity: %d\n", Apple.Quantity);
    printf("Price: %.2f\n", Apple.Price);


    return 0;
}
