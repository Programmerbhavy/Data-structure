// Write a program to insert N elements into a queue and display the queue

#include <stdio.h>
#define MAX 5

int queue[MAX];
int front = -1, rear = -1;

void enqueue(int value)
{
    if (rear == MAX - 1)
    {
        printf("Queue Overflow\n");
        return;
    }

    if (front == -1)
        front = 0;

    queue[++rear] = value;
}

void display()
{
    int i;
    if (front == -1 || front > rear)
        printf("Queue is empty\n");
    else
    {
        printf("Queue: ");
        for (i = front; i <= rear; i++)
            printf("%d ", queue[i]);
        printf("\n");
    }
}
int main()
{
    int val,n,i=0;
    printf("Enter element :-");
    scanf("%d", &n);
    for(i=0;i<n;i++)
    {
    printf("\n enter value :-");
    scanf("%d",&val);
    enqueue(val);  
    }
    display();

    return 0;
}