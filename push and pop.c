#include<stdio.h>
#define n 10
int top = -1;
int stack[n];

void push(int value) {
    if (top >= n - 1) {
        printf("\n\nStack Overflow..");
        return;
    }

    stack[++top] = value;
    printf("\n\nData Pushed into the stack");
}

int pop() {
    if (top < 0) {
        printf("stack underflow...\n");
        return -1;
    }
    return stack[top--];
}

void display() {
    printf("\nStack elements: ");
    for (int i = top; i >= 0; i--) {
        printf("%d ", stack[i]);
    }
    printf("\n");
}

int main() {
    pop();
    push(10);
    push (20);
    push (40);
    display();
    display();
    push(30);
    display();
    return 0;
}
