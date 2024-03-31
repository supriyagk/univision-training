#include <stdio.h>

typedef struct
 {
    char Name[50];
    float salary;
    int IDNo;
} employee;

int main()
{
    employee data[3] = {{"Supriya", 20000, 9}, {"Rocky", 100000, 2}, {"Prabha", 40000, 7}};

    float highestSalary = data[3].salary;
    char highestName[50];

    for (int i = 0; i < 3; i++)
    {


        if (data[i].salary > highestSalary)
        {
            highestSalary = data[i].salary;
            strcpy(highestName, data[i].Name);
        }
    }

    printf("The employee with the highest salary is %s\n", highestName);

    return 0;
}
