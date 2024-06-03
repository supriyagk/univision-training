#include<stdio.h>
#define n 10
int front = -1;
int stack[n];

void enqueue(int value) {
    if (front >= n - 1) {
        printf("\n\nStack Overflow..");
        return;
    }
    stack[++front] = value;
    printf("\n\nData enqueued into the stack");
}

int dequeue() {
    if (front < 0) {
        printf("stack underflow...\n");
        return -1;
    }
    return stack[front--];
}

void display() {
    printf("\nStack elements: ");
    for (int i = front; i >= 0; i--) {
        printf("%d ", stack[i]);
    }
    printf("\n");
}

int main() {
    dequeue();
    enqueue(10);
    enqueue (20);
    enqueue (40);
    display();
    display();
    enqueue(30);
    display();
    return 0;
}
