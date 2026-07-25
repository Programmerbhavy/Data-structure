#include <stdio.h>
#include <string.h>

#define MAX 50

float stack[MAX];
int top = -1;

void push(float val)
{
    stack[++top] = val;
}

float pop()
{
    return stack[top--];
}

float evaluate(char expr[])
{
    int i;
    float a, b;

    for(i = 0; i < strlen(expr); i++)
    {
        char ch = expr[i];

        if(ch >= '0' && ch <= '9')
        {
            push(ch - '0');
        }
        else
        {
            b = pop();
            a = pop();

            if(ch == '+')
                push(a + b);
            else if(ch == '-')
                push(a - b);
            else if(ch == '*')
                push(a * b);
            else if(ch == '/')
                push(a / b);
        }
    }

    return pop();
}

int main()
{
    char expr[MAX];

    printf("Enter postfix expression: ");
    scanf("%s", expr);

    printf("Result = %.2f\n", evaluate(expr));

    return 0;
}
