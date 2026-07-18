#include <stdio.h>
#include <string.h>
#define MAX 50
char stack[MAX];
int top = -1;

void push(char c)
{
    stack[++top] = c;
}
char pop()
{
    return stack[top--];
}
char peek()
{
    return stack[top];
}
int precedence(char c)
{
    if (c == '*' || c == '/')
        return 2;
    if (c == '+' || c == '-')
        return 1;
    return 0;
}
void InfixToPostfix(char infix[], char postfix[])
{
    int i, j = 0;
    char ch;
    for (i = 0; i < strlen(infix); i++)
    {
        ch = infix[i];
        if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
            postfix[j++] = ch;
        else if (ch == '(')
            push(ch);
        else if (ch == ')')
        {
            while (top != -1 && peek() != '(')
                postfix[j++] = pop();
            pop();
        }
        else
        {
            while (top != -1 && precedence(peek()) >= precedence(ch))
                postfix[j++] = pop();
            push(ch);
        }
    }
    while (top != -1)
        postfix[j++] = pop();
    postfix[j] = '\0';
}
int main()
{
    char infix[MAX], postfix[MAX];
    printf("Enter infix expression:");
    scanf("%s", infix);
    InfixToPostfix(infix, postfix);
    printf("Postfix expression:%s\n", postfix);
    return 0;
}
