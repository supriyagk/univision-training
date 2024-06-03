#include <stdio.h>

struct player
{
    char gender;
    char name[50];
};

int main()
{
    struct player player1;
    struct player *ptr;
    ptr = &player1;

    printf("Enter name: ");
    scanf("%s", ptr->name);

    printf("Enter gender: ");
    scanf(" %c", ptr->gender);

    printf("The name of the player is: %s\n", ptr->name);
    printf("The gender of that person is: %c\n", ptr->gender);

    return 0;
}
