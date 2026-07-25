// Write a program to evaluate a Prefix expression using Stack.

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

float evaluatePrefix(char expr[])
{
    int i;
    float a, b;

    for(i = strlen(expr) - 1; i >= 0; i--)
    {
        char ch = expr[i];

        if(ch >= '0' && ch <= '9')
        {
            push(ch - '0');
        }
        else
        {
            a = pop();
            b = pop();

            switch(ch)
            {
                case '+':
                    push(a + b);
                    break;
                case '-':
                    push(a - b);
                    break;
                case '*':
                    push(a * b);
                    break;
                case '/':
                    push(a / b);
                    break;
            }
        }
    }
  return pop();
}

int main()
{
    char expr[MAX];

    printf("Enter prefix expression: ");
    scanf("%s", expr);

    printf("Result = %.2f\n", evaluatePrefix(expr));

    return 0;
}
