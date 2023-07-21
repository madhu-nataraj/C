#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* next;
}*head,*temp,*tail,*newnode;
int main()
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
    temp=head;
    while(temp!=temp)
    {
        temp->next=temp->next->next;
        temp=temp->next;
        printf("%d ",temp->data);
    }
}
