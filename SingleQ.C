#include <stdio.h>
#define MAX 10
int queue[MAX], front = -1, rear = -1;
void enquee(int val)
{
    if(rear == (MAX-1))
        printf("que overflow\n");
    else
    {
        if(front == -1)
         front = 0;
        queue[++rear] = val;
    }
}
int dequee()
{
    if(front == -1 || front > rear)
{
    printf("que overflow\n");
   return -1;
}
return queue[front++];
}
void display()
{
    int i;
    if(front == -1 || front > rear)
        printf("que is empty\n");
    else
    {
        printf("queue = ");
        for(i=front;i<=rear;i++)
           printf
    }
}