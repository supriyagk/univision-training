#include <stdio.h>
int main()
{
FILE * file;
char text [100];
file = fopen ("example.txt","w");
fprintf (file, "Good Afternoon");
fclose (file);
return 0;
}
