#include <stdio.h>
#define MAX 5
int stack[MAX];
int top = -1;

void push(int value)
{
    if (top == MAX - 1)
    {
        printf("Stack overflow\n");
        return;
    }
    stack[++top] = value;
    printf("%d inserted\n", value);
}
int main()
{
    int a;
    push(10);
    push(20);
    printf("Insert the value:");
    scanf("%d", &a);
    return 0;
}