\\ Write a program to implement a Double Ended Queue (Deque)
#include<stdio.h>
#define max 5
int dque[max];
int f=-1,rear=-1;

int isoverflow()
{
    if((f==0 && rear ==max-1)||(f== rear+1))
    {
        printf("\n dequeue overflow!\n");
        return 1;
    }
    else
    return 0;
}

int isunderflow()
{
    if(f==-1)
    {
        printf("\n dequeue underflow!\n");
        return 1;
    }
    else 
    return 0;
}
void insertf(int item)
{
    if(isoverflow())
    return;

    if(f==-1)
        f=rear=0;
    else if(f==0)
        f=max-1;
    else
        f--;

        dque[f]=item;
        printf("\n %d inserted at front:-\n",item);
}
void insertrear(int item)
{
    if(isoverflow())
    return;
    if(f==-1)
      f==rear==0;
    else if(rear == max-1)
        rear =0;
    else
        rear++;
}

