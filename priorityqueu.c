/* wap in c  to implement a priority quue using an array */

#include<stdio.h>
#define max 4
struct priorityqueue
{
    int data;
    int priority;
};
struct priorityqueue pq[max];
int rear =-1;

int isoverflow()
{
    if(rear == max -1)

{
    printf("\n pririty que overflow...");
    return 1

}
else 
    return 0;
}

int isundeflow()
{
    if(rear == -1)
    {
        printf("\n priority que undreflow\n");
        return 1
    }
    else 
    return 0;
}

void enque (int data ,int priority)
{
    
}