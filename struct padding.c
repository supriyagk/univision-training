#include <stdio.h>
#pragma pack 1

struct data{
int date;
char ch;
int month, year
}d;
int main()
{
printf("size in bytes: %d", sizeof(d));
return 0;
}
