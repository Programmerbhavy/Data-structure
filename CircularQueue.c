/*
Write a program to implement a Circular Queue using array. Perform Insert, Delete and Display
operations.
*/
#include<stdio.h>
#define max 5

int cq[max],front=-1,rear=-1;
int isfull()
{
    return(rear+1)%max==front;
}
int isempty()
{
    return front == -1;
}

void enqueue(int val)
{
    if(isfull())
         printf("circular queue full \n");
    else 
    {
        if(isempty())front =0;
        rear = (rear+1)%max;
        cq[rear]=val;
    }
}

int dequeue()
{
    int val;

    if(isempty())
    {
        printf("circular queue emapty\n");
        return -1;
    }
    val = cq[front];
    if(front == rear)
    {
        front = rear = -1;
    }
    else front = (front+1)% max;
    return val;
}
void display()
{
    int i;
        if(isempty())
        {
            printf("queue is empaty\n");
            return;
        }
        printf("Queue :- ");
        i=front;
        while(1)
        {
            printf("%d",cq[i]);
            if(i==rear)
            break;
        i=(i+1)%max;
        }
        printf("\n");
}
int main()
{
    enqueue(10);
    enqueue(20);
    enqueue(30);

    display();

    printf("Dequeued:-%d\n",dequeue());
    
    enqueue(40);
    enqueue(50);
    display();
    return 0;
}