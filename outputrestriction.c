/*Write a program to implement an Output Restricted Deque.*/
#include <stdio.h>

#define MAX 5

int deque[MAX];
int front = -1, rear = -1;

int isOverflow()
{
    return ((front == 0 && rear == MAX - 1) || (front == rear + 1));
}

int isUnderflow()
{
    return (front == -1);
}
void insertFront(int item)
{
    if (isOverflow())
    {
        printf("\nDeque Overflow\n");
        return;
    }

    if (front == -1)
        front = rear = 0;
    else if (front == 0)
        front = MAX - 1;
    else
        front--;

    deque[front] = item;
    printf("\n%d inserted at front.\n", item);
}
void insertRear(int item)
{
    if (isOverflow())
    {
        printf("\nDeque Overflow\n");
        return;
    }

    if (front == -1)
        front = rear = 0;
    else if (rear == MAX - 1)
        rear = 0;
    else
        rear++;

    deque[rear] = item;
    printf("\n%d inserted at rear.\n", item);
}

void deleteRear()
{
    if (isUnderflow())
    {
        printf("\nDeque Underflow\n");
        return;
    }

    printf("\nDeleted Element = %d\n", deque[rear]);

    if (front == rear)
        front = rear = -1;
    else if (rear == 0)
        rear = MAX - 1;
    else
        rear--;
}

void peekFront()
{
    if (isUnderflow())
    {
        printf("\nDeque Underflow\n");
        return;
    }

    printf("\nFront Element = %d\n", deque[front]);
}
void peekRear()
{
    if (isUnderflow())
    {
        printf("\nDeque Underflow\n");
        return;
    }

    printf("\nRear Element = %d\n", deque[rear]);
}
void display()
{
    int i;

    if (isUnderflow())
    {
        printf("\nDeque Empty\n");
        return;
    }

    printf("\nDeque Elements : ");

    i = front;
    while (1)
    {
        printf("%d ", deque[i]);

        if (i == rear)
            break;

        i = (i + 1) % MAX;
    }

    printf("\n");
}

int main()
{
    int choice, item;

    do
    {
        printf("\n\nDouble Ended Queue");
        printf("\n1. Insert at Front");
        printf("\n2. Insert at Rear");
        printf("\n3. Delete from Rear");
        printf("\n4. Peek Front");
        printf("\n5. Peek Rear");
        printf("\n6. Display");
        printf("\n7. Exit");
        printf("\n----------------------------");
        printf("\nEnter Your Choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter Element: ");
            scanf("%d", &item);
            insertFront(item);
            break;

        case 2:
            printf("Enter Element: ");
            scanf("%d", &item);
            insertRear(item);
            break;
        case 3:
            deleteRear();
            break;

        case 4:
            peekFront();
            break;

        case 5:
            peekRear();
            break;

        case 6:
            display();
            break;

        case 7:
            printf("\nProgram Terminated Successfully\n");
            break;

        default:
            printf("\nInvalid Choice!\n");
        }

    } while (choice != 7);

    return 0;
}