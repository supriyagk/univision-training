#include <stdio.h>
#include <stdlib.h>

struct Student
{
    char name[50];
    int subject1;
    int subject2;
    int subject3;
    int total;
    float average;
};

void inputStudentDetails(struct Student *student)
{
    printf("Enter student name: ");
    scanf("%s", (*student).name);

    printf("Enter marks for Subject 1: ");
    scanf("%d", &(*student).subject1);

    printf("Enter marks for Subject 2: ");
    scanf("%d", &(*student).subject2);

    printf("Enter marks for Subject 3: ");
    scanf("%d", &(*student).subject3);

    (*student).total = (*student).subject1 + (*student).subject2 + (*student).subject3;
    (*student).average = (float)(*student).total / 3.0;
}

void printStudentDetails(struct Student student)
{
    printf("Name: %s\n", student.name);
    printf("Subject 1 Marks: %d\n", student.subject1);
    printf("Subject 2 Marks: %d\n", student.subject2);
    printf("Subject 3 Marks: %d\n", student.subject3);
    printf("Total Marks: %d\n", student.total);
    printf("Average Marks: %.2f\n", student.average);
}

int main()
{
    int size, i;
    printf("Enter the number of students: ");
    scanf("%d", &size);

    struct Student *students = (struct Student *)malloc(size * sizeof(struct Student));
    if (students == NULL)
    {
        printf("Memory allocation failed!\n");
        return 1;
    }

    for (i = 0; i < size; i++)
    {
        printf("Enter details for student %d:\n", i + 1);
        inputStudentDetails(&(students[i]));
    }

    printf("Student Details:\n");
    for (i = 0; i < size; i++)
    {
        printf("Student %d:\n", i + 1);
        printStudentDetails(students[i]);
    }

    free(students);
    return 0;
}
