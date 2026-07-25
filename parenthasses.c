#include <stdio.h>
#include <string.h>

#define MAX 100

char stack[MAX];
int top = -1;

void push(char ch)
{
    stack[++top] = ch;
}

void pop() 
{
    if (top != -1)
        top--;
}


int Balanced(char exp[]) 
{
    int i;

    for (i = 0; exp[i] != '\0'; i++) {
        if (exp[i] == '(')
            push(exp[i]);
        else if (exp[i] == ')')
        {
            if (top == -1)
                return 0;
            pop();
        }
    }

    return (top == -1);
}

int main() {
    char exp[100];

    printf("Enter expression: ");
    scanf("%s", exp);

    if (Balanced(exp))
        printf("Parentheses are Balanced.\n");
    else
        printf("Parentheses are Not Balanced.\n");

    return 0;
}
