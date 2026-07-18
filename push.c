#include <stdio.h>
#define MAX 5
int stack[MAX];
int top = -1;
void push(int value)
{
    if (top == MAX - 1)
    {
        printf("Stck Overfolw\n");
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
    printf("insert the value:");
    scanf("%d"), &a;
    push(a);
    return 0;
}