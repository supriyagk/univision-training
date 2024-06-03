#include<stdio.h>
#define n 10
int front = -1;
int rear = -1;
int dequeue[n];

void enqueueFront(int value)
{
    if ((front == 0 && rear == n - 1) || (front == rear + 1))
    {
        printf("\n\nDequeue Overflow..");
        return;
    }

    if (front == -1)
    {
        front = 0;
        rear = 0;
    } else if (front == 0)
    {
        front = n - 1;
    } else
    {
        front--;
    }

    dequeue[front] = value;
    printf("\n\nData Enqueued at the front of the dequeue");
}

void enqueueRear(int value)
    {
    if ((front == 0 && rear == n - 1) || (front == rear + 1))
    {
        printf("\n\nDequeue Overflow..");
        return;
    }

    if (front == -1)
    {
        front = 0;
        rear = 0;
    } else if (rear == n - 1)
    {
        rear = 0;
    } else
    {
        rear++;
    }

    dequeue[rear] = value;
    printf("\n\nData Enqueued at the rear of the dequeue");
}

int dequeueFront()
    {
    if (front == -1)
    {
        printf("Dequeue underflow...\n");
        return -1;
    }

    int value = dequeue[front];
    if (front == rear)
    {
        front = -1;
        rear = -1;
    } else if (front == n - 1)
    {
        front = 0;
    } else
    {
        front++;
    }

    return value;
}

int dequeueRear()
    {
    if (front == -1)
    {
        printf("Dequeue underflow...\n");
        return -1;
    }

    int value = dequeue[rear];
    if (front == rear)
    {
        front = -1;
        rear = -1;
    } else if (rear == 0)
    {
        rear = n - 1;
    } else
    {
        rear--;
    }

    return value;
}

void display()
{
    printf("\nDequeue elements: ");
    if (front <= rear)
        {
        for (int i = front; i <= rear; i++)
        {
            printf("%d ", dequeue[i]);
        }
    }
    else
    {
        for (int i = front; i < n; i++)
        {
            printf("%d ", dequeue[i]);
        }
        for (int i = 0; i <= rear; i++)
        {
            printf("%d ", dequeue[i]);
        }
    }
    printf("\n");
}

int main()
{
    dequeueFront();
    enqueueFront(10);
    enqueueRear(20);
    enqueueFront(5);
    display();
    dequeueFront();
    display();
    enqueueRear(30);
    display();
    return 0;
}
