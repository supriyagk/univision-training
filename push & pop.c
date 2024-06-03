#include<stdio.h>
#define n 10
int top=-1;//check
int stack[n];

void push(int value)
{
if(top >= n-1)
{
printf("\n\nStack Overflow..");
return 1;
}

stack[++top] = value;//??
printf("\n\nData Pushed into the stack");
}

int pop()
{
    if (top<0)
    {
        printf("stack underflow...\n");
        return 1;//
    }
    return stack[top--];
}

 void main()
 {
     push(10);
     pop();
     display();
     pop();
     push(20);
     push(30);

    printf("%d %d", stack[0]);
 }
