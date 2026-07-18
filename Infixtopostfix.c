#include<stdio.h>
#include<string.h>
#define max 50

char stack[max];
int top = -1;

void push(char c)
{
    stack[++top]=c;
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
    if(c=='*'|| c=='/')return 2;
    if(c=='+'|| c=='-')return 1;
    return 0;
}
void infixtopostfix(char infix[],char postfix[])
{
int i,j = 0;
char ch;
for(i=0;i<strlen(infix);i++)
{
    ch = infix[i];
    if((ch>='A' && ch<='Z') || (ch>='a' && ch<='z'))
       postfix[j++] = ch;
    else if (ch == '(')
       push(ch);
    else if(ch ==')')
    {
        while(top !=-1 &&peek()!='(')
        postfix[j++] = pop();
    pop(); // remove '('
    }
    else
    {
        while(top !=-1 && precedence(peek()) >= precedence(ch))
           postfix[j++] = pop();
        push(ch);
    }
}
while(top != -1)
  postfix[j++] = pop();
postfix[j]='\0';
}

int main()
{
    char infix[max],postfix[max];

    printf("Enter infix expression :-");
    scanf("%s",infix);

    infixtopostfix(infix,postfix);

    printf("Postfix expression :- %s \n",postfix);

    return 0;
}