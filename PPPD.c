#include <stdio.h>
#define MAX 5
int stack[MAX];
int top = -1;
void push(int value)
{
    if (top == MAX - 1)
    {
        printf("Overflow\n");
        return;
    }
    stack[++top] = value;
}
int pop()
{
    if (top == -1)
    {
        printf("Underflow\n");
        return -1;
    }
    return stack[top--];
}
int peek()
{
    if (top == -1)
    {
        return -1;
        return stack[top];
    }
    void display()
    {
        int i;
        for (i = top; i >= 0; i--)
        {
            printf("%d", stack[i]);
        }
        printf("\n");
    }
};
int main()
{
    push(10);
    push(20);
    push(30);

    printf("Deleted = %d\n", pop());
    display();
    return 0;
}
