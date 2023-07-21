#include<stdio.h>
#include<stdlib.h>
struct first
{
    int one;
    struct first*next;
    struct first*prev
    }*head,*temp,*newnode;
int main()
{
    int choice;
    while(1)
    {
        printf("\n1.create an array");
        printf("\n2.Display");
        printf("\n3.count");
        printf("\n6.exit");
        printf("\nEnter your choice:(1,2,3,4)");
        scanf("%d",& choice);
        switch(choice)
        {
        case 1:
            create();
            break;
        //case 2:
        //Display();
        //break;
        case 3:
            insertbeg();
            //count();
            break;
        case 4:
            insertend();
            break;
        case 5:
            insertmid();
            break;
        case 6:
            Display();
            break;
        default:
            printf("INVALID");
        }
    }
    return 0;
}
void create()
{
    int n,i,count=0;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        newnode=(struct first*)malloc(sizeof(struct first));
        scanf("%d",&newnode->one);
        newnode->next=NULL;
        newnode->prev=NULL;
        if(head==NULL)
        {
            head=newnode;
            temp=newnode;
        }
        else
        {
            temp->next=newnode;
            newnode->prev=temp;
            temp=newnode;
        }
    }
}
void insertbeg()
{
    newnode=(struct first*)malloc(sizeof(struct first));
    scanf("%d",&newnode->one);
    newnode->next=head;
    newnode->prev=NULL;
    head=newnode;
}
void insertend()
{
    newnode=(struct first*)malloc(sizeof(struct first));
    scanf("%d",&newnode->one);
    newnode->next=NULL;
    temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=newnode;
    newnode->prev=temp;
    newnode->next=NULL;
    temp=newnode;
}
void insertmid()
{
    int pos,j;
    newnode=(struct first*)malloc(sizeof(struct first));
    scanf("%d",&newnode->one);
    scanf("%d",&pos);
    temp=head;
    for(j=1; j<pos; j++)
    {
        temp=temp->next;
        newnode->next=temp->next;
        newnode->prev=temp;
        temp->next=newnode;
    }

}
void Display()
{
    temp=head;
    while(temp!=NULL)
    {
        printf("%d",temp->one);
        temp=temp->next;
    }
}
