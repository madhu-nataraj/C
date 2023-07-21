#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node*next;
    struct node*prev;
}*head,*tail,*newnode,*temp,*temp1;
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        scanf("%d",&newnode->data);
        newnode->next=NULL;
        newnode->prev=NULL;
        if(head==NULL)
        {
            head=newnode;
            temp=newnode;
            tail=newnode;
            temp1=newnode;
        }
        else
        {
            temp->next=newnode;
            newnode->prev=temp;
            temp=newnode;
            temp1=newnode;
            tail=newnode;
        }
    }
    temp=head;
    for(i=0; i<n/2; i++)
    {
        temp->next=NULL;
        tail=tail->prev;
        tail->next=NULL;
        temp1->prev=NULL;
        temp->next=temp1;
        temp1->prev=temp;
        temp=temp->next;
        temp->prev=NULL;
        temp->prev=temp1;
        temp1=tail;
    }
    temp=head;
    for(i=0; i<n; i++)
    {
        printf("%d",temp->data);
        temp=temp->next;
    }
    return 0;
}
