#include<stdio.h>
#include<stdlib.h>
struct first
{
    char one;
    struct first*next;
    struct first*prev;
}*head=NULL,*tail=NULL,*temp=NULL,*temp1=NULL,*newnode=NULL;
int main()
{
    int n,i,count=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        newnode=(struct first*)malloc(sizeof(struct first));
        scanf("%c",&newnode->one);
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
}
