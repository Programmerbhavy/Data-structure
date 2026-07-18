// wap to menu driven program to implement(push,pop,peek and display)stack operations.
#include <stdio.h>
#include <string.h>

#define MAX 5

int stack[MAX];
int top = -1;

void push(int value)
{
    if (top == MAX - 1)
    {
        printf("Stack is Overflow\n");
        return;
    }

    stack[++top] = value;
    printf("%d inserted\n", value);
}
void pop()
{
    if (top == -1)
    {
        printf("Stack is Under flow\n");
        return -1;
    }
    return stack[top--];
}

int main()
{
    int a;

    push(10);
    push(20);

    printf("Insert the value: ");
    scanf("%d", &a);

    push(a);

    return 0;
}
