#include <stdio.h>

#define MAX 5

char stack[MAX];
int top = -1;

void push(char itm)
{
    if (top == MAX - 1)
    {
        printf("Overflow\n");
        return;
    }
    stack[++top] = itm;
}

char pop()
{
    if (top == -1)
    {
        printf("Underflow\n");
        return '\0';
    }
    return stack[top--];
}

char peek()
{
    if (top == -1)
    {
        printf("Stack is empty\n");
        return '\0';
    }
    return stack[top];
}

void display()
{
    if (top == -1)
    {
        printf("Stack is empty\n");
        return;
    }
    printf("Stack: ");
    for (int i = 0; i <= top; i++)
        printf("%c ", stack[i]);
    printf("\n");
}

void reverse(const char *src, char *dst)
{
    int i = 0;
    while (src[i] != '\0')
        push(src[i++]);

    int j = 0;
    char ch;
    while ((ch = pop()) != '\0')
        dst[j++] = ch;
    dst[j] = '\0';
}

int main()
{
    char str[MAX];
    char rev[MAX];
    int i = 0;

    printf("Enter a string (max %d chars): ", MAX - 1);
    if (fgets(str, MAX, stdin) == NULL)
        return 0;

    while (str[i] != '\0' && str[i] != '\n')
        i++;
    str[i] = '\0';

    for (int j = 0; str[j] != '\0'; j++)
        push(str[j]);

    display();
    printf("Peek: %c\n", peek());

    reverse(str, rev);
    printf("Reversed string: %s\n", rev);
    return 0;
}
