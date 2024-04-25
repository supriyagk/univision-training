#include <stdio.h>
int main()
{
FILE *file;
char text [100];
file = fopen ("example.txt","w");
fprintf (file, "Good Afternoon");
fclose (file);

file = fopen ("example.txt", "r");
//fscanf(file,"%s",text);
fgets(text,sizeof(text),file);
printf("data from file is:%s", text);
fclose(file);
return 0;
}
