/* 
Write a program to perform following operations on Singly Linked List
a. Delete node from beginning
*/

// Insert node at beginning

/*
Write a program to perform following operations on Singly Linked List
a. Insert node at beginning
b. Insert node at the end
c. Insert node at given position
d. Display list
*/
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *head = NULL;

void insertBeginning()
{
    struct node *newnode;

    newnode = malloc(sizeof(struct node));

    printf("Enter data: ");
    scanf("%d", &newnode->data);

    newnode->next = head;
    head = newnode;

    printf("Node inserted.\n");
}

void insertEnd()
{
    struct node *newnode, *temp;

    newnode = malloc(sizeof(struct node));

    printf("Enter data: ");
    scanf("%d", &newnode->data);

    newnode->next = NULL;

    if (head == NULL)
    {
        head = newnode;
    }
    else
    {
        temp = head;

        while (temp->next != NULL)
        {
            temp = temp->next;
        }

        temp->next = newnode;
    }

    printf("Node inserted.\n");
}

void insertPosition()
{
    struct node *newnode, *temp;
    int pos, i;

    printf("Enter position: ");
    scanf("%d", &pos);

    newnode = malloc(sizeof(struct node));

    printf("Enter data: ");
    scanf("%d", &newnode->data);

    if (pos == 1)
    {
        newnode->next = head;
        head = newnode;
        return;
    }

    temp = head;

    for (i = 1; i < pos - 1; i++)
    {
        if (temp == NULL)
        {
            printf("Invalid position.\n");
            free(newnode);
            return;
        }

        temp = temp->next;
    }

    if (temp == NULL)
    {
        printf("Invalid position.\n");
        free(newnode);
        return;
    }

    newnode->next = temp->next;
    temp->next = newnode;

    printf("Node inserted.\n");
}
/* delete at begining */

void deletebegining()
{
    struct node *temp;
    if(head == NULL)
    {
        printf("\n List is empty\n");
        return;
    }
    temp = head;
    head = head->next;
    free(temp);
    
    printf("\n node delete sucessfully");
}

void deleteend()
{
    struct node *temp ,*prev;
    if(head == NULL)
    {
        printf("\n List is empty\n");
        return;
    }
    if(head->next==NULL)
    {
        free(head);
        head=NULL;
        printf("\n node delete sucessfully");
        return;
    }
    temp = head;
    while(temp->next!= NULL)
    {
        prev=temp;
        temp=temp->next;
    }
    prev->next=NULL;
    free(temp);
    printf("\n node delete sucessfully");
}

void deleteposition()
{
    struct node *temp,*ptr;
    int pos,i;

    if(head == NULL)
    {
       printf("\n List is empty\n");
       return;
    }
    printf("\nEnter position :");
    scanf("%d",&pos);
    if(pos==1)
    {
        deletebegining();
        return;
    }
    temp=head;
    for(int i=1;i<pos-1 && temp!=NULL;i++)
    {
        temp=temp->next;
    }
    if(temp == NULL || temp->next == NULL)
    {
        printf("\nPosition not found");
        return;
    }
    ptr=temp->next;
    temp->next=ptr->next;
    free(ptr);

    printf("\n node delete sucessfully");

}

void display()
{
    struct node *temp = head;

    if (head == NULL)
    {
        printf("List is empty.\n");
        return;
    }

    while (temp != NULL)
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }

    printf("NULL\n");
}

int main()
{
    int choice;

    while (1)
    {
        printf("\n1. Insert Beginning");
        printf("\n2. Insert End");
        printf("\n3. Insert Position");
        printf("\n4. Delete begining");
        printf("\n5. Delete End");
        printf("\n6. Delete position");
        printf("\n7. Display");
        printf("\n8. Exit");

        printf("\nEnter choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                insertBeginning();
                break;

            case 2:
                insertEnd();
                break;

            case 3:
                insertPosition();
                break;

            case 4:
                deletebegining();
                break;

            case 5:
                deleteend();
                break;

            case 6:
                deleteposition();
                break;

            case 7:
                display();
                break;

            case 8:
                exit(0);

            default:
                printf("Invalid choice.\n");
        }
    }

    return 0;
}
