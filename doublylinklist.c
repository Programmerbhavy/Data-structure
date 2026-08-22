/*
wap to create a doubly linklist
*/
#include<stdio.h>
#include<stdlib.h>
struct node
{
   int data;
   struct node *prev;
   struct node *next;
};
struct node *head=NULL;
//FUNCTION TO INSERT AT BEGINNING
void insertbeginnig()
{
    struct node *newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("\nENTER A DATA:-");
    scanf("%d",&newnode->data);

    newnode->prev=NULL;
    newnode->next=head;

    if(head!= NULL)
    {
        head->prev=newnode;
    }
    head=newnode;

    printf("\nNODE INSERT SUCCESFULLT");
}

//Insert at End
void insertend()
{
    struct node *newnode,*temp;
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("\nENTER A DATA:-");
    scanf("%d",&newnode->data);

    newnode->prev=NULL;
    if(head==NULL)
    {
        newnode->prev=NULL;
        head=newnode;
    }
    else
    {
        temp=head;
        while(temp->next!=NULL)
        {
            temp=temp->next;
            temp->next=newnode;
            newnode->prev=temp;
        }
    }
    

    printf("\nNODE INSERT SUCCESFULLT");
}
void insertposition()
{
    struct node *newnode,*temp;
    int pos, i;

    printf("\n Enter position :- ");
    scanf("%d",&pos);

    if(pos <= 0)
    {
        printf("\n Invalid position \n ");
        return;

    }
    if(pos == 1)
    {
        insertbeginnig();
        return;
    }
        temp = head;

    for(i=1;i<pos-1 && temp != NULL;i++)
    {
        temp = temp->next;
    }
    if(temp == NULL)
    {
        printf("\n position not found");
        return;
    }
    newnode = (struct node *)malloc(sizeof(struct node));

    if(newnode == NULL)

    {
        printf("\n Memory allocation failed");
        return;
    }
    printf("\n Enter data :");
    scanf("%d",&newnode->data);

    newnode->next = temp->data;
    newnode->prev = temp;

    if(temp->next !=NULL)
    {
        temp->next->prev = newnode;
    }
    temp->next =newnode;

    printf("\n Node add sucessfully");
}
void display()
{
    struct node *temp;
    if(head==NULL)
    {
        printf("\nlist is empty!!!");
        return ;
    }
    temp=head;
    printf("\nDOUBLY LINKED LIST:-");
    while(temp!=NULL)
    {
        printf("%d<->",temp->data);
        temp=temp->next;
    }
    
}

int main()
{
    int c;
    do
    {
        printf("\nDOUBLY LINKED LIST");
        printf("\n1.Insert at Beginnig:-");
        printf("\n2.Insert at End:-");
        printf("\n3. Insert at Position :-");
        printf("\n7.Display:-");
        printf("\n9.Exit:-");

        printf("\nENTER A CHOICE:-");
        scanf("%d",&c);
    
    switch(c)
    {
        case 1:
           insertbeginnig();
        break;

        case 2:
          insertend();
        break;

        case 3:
            insertposition();
            break;

        case 7:
           display();
        break;

        case 9:
           printf("\nPROGRAM TERMINATED!!!!!");
        break;

        default:
           printf("\nINVALID CHOICE!!!!");

    }
        
    } while(c!=9);
    return 0;
    
}