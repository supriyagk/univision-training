#include <stdio.h>
int main()
{
int marks[] = {78,79,99, 100, 50, 45, 35, 80, 90,92};
int temp;
int n = sizeof(marks)/sizeof (int);
temp = marks[0];
for (int i =0; i<n, i++)
{
if (temp<marks[i])
{
temp= marks[i];
}
printf ("%d", temp);
return 0;
}
}
