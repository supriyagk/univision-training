#include <stdio.h>

#define n 10
int top = -1;
int stack[n];
void push(int value)
{
    if (top >= n - 1)
    {
        printf("\n\n Stack overflow..");
    }
    else
    {
        stack[++top] = value;
        printf("\n\n Data pushed into the stack");
    }
    int pop
}
int main()
{
    push(10);
    push(20);
    return 0;
}

