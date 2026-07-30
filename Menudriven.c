// Write a program to implement Menu-Driven Queue using an Array.

#include <stdio.h>

#define max 10

int queue[max], front = -1, rear = -1;

void Enqueue(int val)
{
    if (rear == max - 1)
        printf("Queue Overflow\n");
    else
    {
        if (front == -1)
            front = 0;
        queue[++rear] = val;
    }
}

int Dequeue()
{
    if (front == -1 || front > rear)
    {
        printf("Queue Underflow\n");
        return -1;
    }
    return queue[front++];
}

void display()
{
    int i;
    if (front == -1 || front > rear)
        printf("Queue is empty\n");
    else
    {
        printf("Queue: ");
        for (i = front; i <= rear; i++)
            printf("%d ", queue[i]);
        printf("\n");
    }
}

int main()
{
    int ch, val;

    do
    {
        printf("\n1. Enqueue\n2. Dequeue\n3. Display\n4. Exit\n");
        printf("Choice: ");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            printf("Enter value: ");
            scanf("%d", &val);
            Enqueue(val);  
            break;

        case 2:
            printf("Dequeued: %d\n", Dequeue());
            break;

        case 3:
            display();
            break;

        case 4:
            printf("Exiting...\n");
            break;

        default:
            printf("Invalid choice\n");
        }

    } while (ch != 4);

    return 0;
}
