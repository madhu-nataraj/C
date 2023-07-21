#include<stdio.h>
#include<stdlib.h>
struct node{
    char data[5];
    struct node*next;
    struct node*prev;
}*head,*temp,*newnode,*tail;
int main()
{
    int a,i,j;
    scanf("%d",&a);
    for(i=0;i<a;i++)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        scanf("%s",&newnode->data);
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
    temp=newnode;
        while(temp)
        {
            printf("%s ",temp->data);
            temp=temp->prev;
        }
}
