#include <stdio.h>
#include <ctype.h>

int main()
{
    char password[100];
    int has_uppercase = 0;
    int has_lowercase = 0;
    int has_digit = 0;

    printf("Enter a Password: ");
    scanf("%s", password);

    for (int i = 0; password[i] != '\0'; i++)
        {
        if (isupper(password[i]))
        {
            has_uppercase = 1;
        } else if (islower(password[i]))
        {
            has_lowercase = 1;
        } else if (isdigit(password[i]))
        {
            has_digit = 1;
        }
    }

    if (has_uppercase)
        {
        printf("Password has an uppercase letter.\n");
    } else
    {
        printf("Password should have an uppercase letter.\n");
    }

    if (has_lowercase)
    {
        printf("Password has a lowercase letter.\n");
    } else
    {
        printf("Password should have a lowercase letter.\n");
    }

    if (has_digit)
    {
        printf("Password has a digit.\n");
    } else
    {
        printf("Password should have a digit.\n");
    }

    return 0;
}
