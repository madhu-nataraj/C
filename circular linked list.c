#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* next;
    struct node* previous;
}*head,*temp,*tail,*newnode;
void main()
{
    int choice=1;
    while(choice)
    {
        printf("\n1.create an array");
        printf("\n2.Display");
        printf("\n3.del_first");
        printf("\n4.insert");
        printf("\n5.insert_end");
        printf("\n6.del_end");
        printf("\nEnter your choice:(1,2,3,4,5,6)");
        scanf("%d",& choice);
        switch(choice)
        {
        case 1:
            create();
            break;
        case 2:
            display();
            break;
        case 3:
            del_frst();
            break;
        case 4:
            insert();
            break;
        case 5:
            insert_end();
            break;
        case 6:
            del_end();
            break;
        default:
            printf("INVALID");
        }
    }
}
void create()
{
    int n;
    scanf("%d",&n);
    for(int i=0; i<n; i++)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        scanf("%d",&newnode->data);
        newnode->next=NULL;
        if(head==NULL)
        {
            head=newnode;
            temp=newnode;
        }
        else
        {
            temp->next=newnode;
            temp=newnode;
            tail=newnode;
            tail->next=head;
        }
    }
}
void display()
{
    temp=tail;
    do
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
    while(temp!=tail);
}
void del_frst()
{
    temp=head;
    head=temp->next;
    tail->next=head;
    display();
}
void insert()
{
    newnode=(struct node*)(malloc(sizeof(struct node)));
    printf("Enter the data: ");
    newnode->next=NULL;
    scanf("%d",&newnode->data);
    newnode->next=head;
    head=newnode;
    tail->next=head;
    display();
}
void insert_end()
{
    newnode=(struct node*)(malloc(sizeof(struct node)));
    printf("Enter the data: ");
    newnode->next=NULL;
    scanf("%d",&newnode->data);
    tail->next=newnode;
    tail=newnode;
    tail->next=head;
    display();
}
void del_end()
{
    temp=head;
    do
    {
        if(temp->next==tail)
        {
            tail=temp;
            tail->next=head;
        }
        temp=temp->next;
    }
    while(temp!=head);
    display();
}
