#include <stdio.h>
#include <ctype.h>

int main()
{
    char password[100];
    int uppercase = 0;
    int lowercase = 0;
    int specialchar = 0;
    int numbers = 0;
    int length = 0;

    printf("Enter a password: ");
    scanf("%s", password);
    while (password[length] != '\0')
    {
        length++;
    }

    for(int i = 0; i < length; i++)
        {
        if(isupper(password[i]))
        {
            uppercase++;
        }
        if(islower(password[i]))
        {
            lowercase++;
        }
        if(!isalnum(password[i]))
        {
            specialchar++;
        }
        if(isdigit(password[i]))
        {
            numbers++;
        }
    }

    if(uppercase >= 1 && lowercase >= 1 && specialchar >= 1 && numbers >= 2 && length >= 8)
    {
        printf("Valid password.\nPassword is strong.\n");
    } else
    {
        printf("Invalid password.\nPassword is weak.\n");
    }

    return 0;
}
