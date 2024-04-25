#include <stdio.h>

struct player1
{
    char name[50];
    int runs;
};

int main()
{
    struct player1 player1;
    struct player1 *ptr;
    ptr = &player1;
    printf("Enter name: ");
    scanf("%s", ptr->name);
    printf("Enter runs: ");
    scanf("%d", &ptr->runs);
    printf("The name of the player is: %s\n", ptr->name);
    printf ("The runs scored by that person is: %d\n", ptr->runs);
    return 0;
}
