/* wap in c  to implement a priority quue using an array */

#include<stdio.h>
#define max 100
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
    return 1;

}

else 
    return 0;
}

int isundeflow()
{
    if(rear == -1)
    {
        printf("\n priority que undreflow\n");
        return 1;
    }
    else 
    return 0;
}

void enque (int data ,int priority)
{
    int i;

    if(isoverflow())
    return;

    rear++;
    for(i=rear; i>0 && pq[i-1].priority< priority; i-- )
    {
        pq[i] = pq[i-1];
    }
    pq[i].data = data;
    pq[i].priority = priority;

    printf("\n Element inserted succesfully\n");
}
void deque()
{
    int i;

    if(isundeflow())
    return;

    printf("delete element =%d\n", pq[0].data);
    printf("delete priority =%d\n", pq[0].priority);
    for(i=0; i<rear; i++)
    {
        pq[i] = pq[i+1];
    }
    rear--;
}
void peek()
{
    if(isundeflow())
    return;

    printf("Higesht priority element =%d\n", pq[0].data);
    printf("front priority =%d\n", pq[0].priority);
}
void display()
{
    int i;
    if(isundeflow())
    return;

    printf("\n Element in priority queue :\n");
    printf("-----------------------------\n");
    printf("Element \t Priority\n");
    printf("-----------------------------\n");
    for(i=0; i<=rear; i++)
    {
        printf("%d\t%d\n", pq[i].data, pq[i].priority);
    }
};

int main()
{
    int choice,data,priority;
    do
    {
        printf("===============================");
        printf("\n Priority Queue Operations :\n");
        printf("===============================\n");
        printf("\n 1. Insert Element");
        printf("\n 2. Delete Element");
        printf("\n 3. Peek");
        printf("\n 4. Display");
        printf("\n 5. Exit");
        printf("\n===============================\n");
        printf("\n Enter your choice : ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Enter Element : ");
                scanf("%d ", &data);

                printf("Enter Priority : ");
                scanf("%d", &priority);

                enque(data, priority);
                break;
            case 2:
                deque();
                break;
            case 3:
                peek();
                break;
            case 4:
                display();
                break;
            case 5:
                printf("Program Terminated Successfully\n");
                break;
            default:
                printf("Invalid choice\n");
        }

    }
    while(choice != 5);
    return 0;

}