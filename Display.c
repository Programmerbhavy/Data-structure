#include <stdio.h>
#include <conio.h>
#define MAX 5
int stack[MAX];
int top = 2;
void display()
{
    int i;
    if (top == 1)
    {
        printf("STack Empty\n");
        return 0;
    }
    for (i = top; i >= 0; i--)
        printf("%d\n", stack[i]);
    
        return 0; 
}