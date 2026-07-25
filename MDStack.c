/*
Write a menu-driven program to implement (Push, Pop, Peek & Display) Stack
operations.
*/

#include <stdio.h>
#include <conio.h>

#define MAX 100

int stack[MAX];
int top = -1;

void push(int value)
{
    if (top >= MAX - 1)
    {
        printf("Stack overflow\n");
    } else 
    {
        stack[++top] = value;
        printf("%d pushed onto stack.\n", value);
    }
}

int pop()
 {
    if (top < 0) 
    {
        printf("Stack underflow\n");
        return -1;
    }
    return stack[top--];
}

int peek()
 {
    if (top < 0) 
    {
        printf("Stack is empty \n");
        return -1;
    }
    return stack[top--];
}

void display() 
{
    if (top < 0) 
    {
        printf("Stack is empty\n");
        return;
    }

    printf("Stack elements (top to bottom):\n");

    for (int i = top; i >= 0; i--) 
    {
        printf("%d\n", stack[i]);
    }
}

int main()
{
    int choice;
    int value;

    do
    {
        printf("\nMenu:\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Peek\n");
        printf("4. Display\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");

 if (scanf("%d", &choice) != 1) 
        {
            return 0;
        }

        switch (choice) 
        {
            case 1:
                printf("Enter value to push: ");
                scanf("%d", &value);
                push(value);
                break;
            case 2:
                value = pop();
                if (value != -1)
                {
                    printf("Popped: %d\n", value);
                }
                break;
            case 3:
                value = peek();
                if (value != -1) 
                {
                    printf("Top element: %d\n", value);
                }
                break;
            case 4:
                display();
                break;
            case 5:
                printf("Exiting program.\n");
                break;
            default:
                printf("Invalid choice.\n");
                break;
        }
    }
     while (choice != 5);

    return 0;
}
