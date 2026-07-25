/*
Write a program to check whether a string is palindrome using Stack.
*/

#include <stdio.h>
#include <string.h>

#define MAX 5

char stack[MAX];
int top = -1;

void push(char ch)
{
    stack[++top] = ch;
}

char pop()
{
    return stack[top--];
}

int main()
{
    char str[MAX];
    int i, len, flag = 1;

    printf("Enter a string: ");
    scanf("%s", str);

    len = strlen(str);

    for(i = 0; i < len; i++)
    {
        push(str[i]);
    }


    for(i = 0; i < len; i++)
    {
        if(str[i] != pop())
        {
            flag = 0;
            break;
        }
    }

    if(flag)
        printf("The string is a Palindrom.\n");
    else
        printf("The string is Not a Palindrom.\n");

    return 0;
}
