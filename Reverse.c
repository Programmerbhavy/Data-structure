/*
Write a program to reverse a string using Stack.
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

char pop() {
    return stack[top--];
}

void reverse(char str[])
 {
    int i, len = strlen(str);
  
    for (i = 0; i < len; i++)
     {
        push(str[i]);
    }
    for (i = 0; i < len; i++)
     {
        str[i] = pop();
    }
}
int main() 
{
    char str[MAX];
    
    printf("Enter a string: ");
    scanf("%s", str);

    reverse(str);

    printf("Reversed string: %s\n", str);

    return 0;
}
