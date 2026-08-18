// Insert node at end

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

int main ()
{
    struct node *head = NULL;
    struct node *newnode , *temp;
    int value;

    newnode =(struct node *) malloc(sizeof(struct node));

    printf("Enter data: ");
    scanf("%d", &newnode->data);

    newnode->data = value;
    newnode->next = NULL;

    if (head == NULL)
    {
        head = newnode;
    }
    else
    {
        temp = head;

        while (temp->next != NULL)
        temp = temp->next;
        temp->next = newnode;
    }

    printf("Node inserted.\n");
    return 0;
} 