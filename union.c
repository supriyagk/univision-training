#include <stdio.h>
#include <string.h>
union student
{
char name[50];
int rollno;
int age;
};

int main()
{
union student std1;
strcpy (std1.name, "supriya");
std1.rollno = 301;
std1.age =21;
printf ("Student rollno:%d",std1.rollno);
return 0;
}
