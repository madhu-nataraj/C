#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* next;
    struct node* prev;
}*head,*temp,*tail,*newnode;
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        scanf("%d",&newnode->data);
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
            tail->next=head;
        }
    }
        temp=tail;
        do
        {
            printf("%d",temp->data);
            temp=temp->prev;
        }while(temp!=tail);
}
