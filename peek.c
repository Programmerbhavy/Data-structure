#include <stdio.h>
#include <conio.h>

#define MAX 5

int stack[MAX];
int top = 2;

int peek()
{
    if (top == -1)
    {
        printf("Stack Empty\n");
        return -1;
    }
    return stack[top];
}