#include<stdio.h>
#include<stdlib.h>
struct first
{
    int one;
    struct first*next;
    struct first*prev;
}*head=NULL,*tail=NULL,*temp=NULL,*temp1=NULL,*newnode=NULL;
int main()
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
            tail=newnode;
        }
        else
        {
            temp->next=newnode;
            newnode->prev=temp;
            temp=newnode;
            tail=newnode;
        }
    }
    tail->next=head;
    temp1=tail->prev;
    temp1->next=NULL;
    tail->prev=NULL;
    head->prev=tail;
    head=tail;
    tail=temp1;
    temp=head;
    while(1)    {
        printf("%d ",temp->one);
        temp=temp->next;
    }
}
