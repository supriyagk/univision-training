#include <stdio.h>
#include <ctype.h>
int main ()
{
char password [100];
int has_uppercase = 0;
int has_lowercase = 0;
int has_digit = 0;
printf ("Enter a Password:");
scanf ("%s", password);
for (int i=0; password[i] ! ='\0'; i++)
{
if (isupper (password))
{
has_uppercase =1;
break;
}
}
if(has_uppercase)
{
printf("Password has a uppercase");
}
else
{
printf ("Password should have a uppercase");
}
}
for (int i=0; password[i] ! ='\0'; i++)
{
if (isupper (password))
{
has_uppercase =1;
break;
}
}
if(has_uppercase)
{
printf("Password has a uppercase");
}
else
{
printf ("Password should have a uppercase");
}
}


for (int i=0; password[i] ! ='\0'; i++)
{
if (islower (password))
{
has_lowercase =1;
break;
}
}
if(has_lowercase)
{
printf("Password has a lowercase");
}
else
{
printf ("Password should have a lowercase");
}
}


for (int i=0; password[i] ! ='\0'; i++)
{
if (isdigit (password))
{
has_digit =1;
break;
}
}
if(has_digit)
{
printf("Password has a digit");
}
else
{
printf ("Password should have a digit");
}
}



