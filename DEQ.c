#include <stdio.h>

#define MAX 5

int dque[MAX];
int f = -1, rear = -1;

int isoverflow()
{
    if ((f == 0 && rear == MAX - 1) || (f == rear + 1))
    {
        printf("\nDeque Overflow!\n");
        return 1;
    }
    return 0;
}

int isunderflow()
{
    if (f == -1)
    {
        printf("\nDeque Underflow!\n");
        return 1;
    }
    return 0;
}

void insertf(int item)
{
    if (isoverflow())
        return;

    if (f == -1)
        f = rear = 0;
    else if (f == 0)
        f = MAX - 1;
    else
        f--;

    dque[f] = item;
    printf("\n%d inserted at front.\n", item);
}

void insertrear(int item)
{
    if (isoverflow())
        return;

    if (f == -1)
        f = rear = 0;
    else if (rear == MAX - 1)
        rear = 0;
    else
        rear++;

    dque[rear] = item;
    printf("\n%d inserted at rear.\n", item);
}

void deletef()
{
    if (isunderflow())
        return;

    printf("\nDeleted element = %d\n", dque[f]);

    if (f == rear)
        f = rear = -1;
    else if (f == MAX - 1)
        f = 0;
    else
        f++;
}

void deleterear()
{
    if (isunderflow())
        return;

    printf("\nDeleted element = %d\n", dque[rear]);

    if (f == rear)
        f = rear = -1;
    else if (rear == 0)
        rear = MAX - 1;
    else
        rear--;
}

void peekfront()
{
    if (isunderflow())
        return;

    printf("\nFront element = %d\n", dque[f]);
}

void peekrear()
{
    if (isunderflow())
        return;

    printf("\nRear element = %d\n", dque[rear]);
}

void display()
{
    int i;

    if (isunderflow())
        return;

    printf("\nDeque elements: ");

    i = f;
    while (1)
    {
        printf("%d ", dque[i]);

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
        printf("\n======================");
        printf("\n DOUBLE ENDED QUEUE");
        printf("\n======================");
        printf("\n1. Insert at Front");
        printf("\n2. Insert at Rear");
        printf("\n3. Delete from Front");
        printf("\n4. Delete from Rear");
        printf("\n5. Peek Front");
        printf("\n6. Peek Rear");
        printf("\n7. Display");
        printf("\n8. Exit");

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter element: ");
            scanf("%d", &item);
            insertf(item);
            break;

        case 2:
            printf("Enter element: ");
            scanf("%d", &item);
            insertrear(item);
            break;

        case 3:
            deletef();
            break;

        case 4:
            deleterear();
            break;

        case 5:
            peekfront();
            break;

        case 6:
            peekrear();
            break;

        case 7:
            display();
            break;

        case 8:
            printf("\nProgram terminated successfully.\n");
            break;

        default:
            printf("\nInvalid choice! Try again.\n");
        }

    } while (choice != 8);

    return 0;
}