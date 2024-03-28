#include <stdio.h>
int main()
int numbers[]= {1,2,3,4,5};
for (int i=o; i<5; i++)
{
printf("Numbers in array are: %d\n",numbers[i]);
}
int *ptr =numbers;
for (int i=0; i<5 ;i++)
{
printf ("numbers in array are: %d\n", ptr[i]);
i++;
}
return 0;
}
