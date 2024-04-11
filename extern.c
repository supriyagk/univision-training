#include <stdio.h>
//#include "file2.c"

extern int count;
int main()
{
extern int count;
printf ("THe value of count is %d",count);
return 0;

}
int count = 20;




