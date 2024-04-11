#include <stdio.h>
struct person{
int age:9;
int marks;
};
int main()
{
struct person p1;
printf ("the size of struct is %ld", sizeof(p1));
}
