#include <stdio.h>
#include <string.h>


struct student
 {
    char name[50];
    int age;
    float height;
};
int a[]={10,20,30};
int a[10];

int main()
{
    struct student person[3]={{"virat",35,6.0},{"Dhoni",36,6.1},{"Rohit",37,6.2}}
 for (int i=0; i<3;i++)
 {

    strcpy(person[0].name, "Virat");
    person[0].age = 34;
    person[0].height = 6.0;


    printf("Name: %s\n", person[i].name);
    printf("Age: %d\n", person[0].age);
    printf("Height: %.2f\n", person[0].height);
}
    return 0;
}
