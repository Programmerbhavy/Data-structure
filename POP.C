#include <stdio.h>
#include <conio.h>
#define MAX 5
int stack[MAX];
int top = 2;
int pop()
{
    if (top == -1)
    {
        printf("Stack Underflow\n");
        return -1;
    }
    return stack[top--];
}
int main()
{
    stack[0] = 10;
    stack[1] = 20;
    stack[2] = 30;
    printf("Deleted = %d\n", pop());
    return 0;
}