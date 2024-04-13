#include <stdio.h>
#include <stdlib.h>
int main()
{
int size,i;
printf("Enter the number of elements:");
scanf ("%d", &size);
int *ptr = (int*)malloc(size*sizeof(int));
if (ptr == NULL)
{
printf ("Memory allocation failed!\n");
return 1;
}
printf ("Enter %D elements:\n", size);
for (i=0;i<size; i++)
{
scanf ("%d", ptr+i);
}
printf ("The entered elements are:");
for (i=0; i<size; i++)
{
printf ("%d", *(ptr+i));
}
printf ("\n");
free (ptr);
return 0;
}
