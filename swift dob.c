#include<stdio.h>
#include<stdlib.h>
struct first
{
    int one;
    struct first*next;
    struct first*prev;
}*head,*temp,*newnode,*tail;
int main()
{
    int n,i,count=0;
    scanf("%d",&n);
    scanf("%d",&s);
    for(i=0;i<n;i++)
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
    tail=temp;
    tail->next=head;
    head->prev=tail;
}
int a;
scanf("%d",&a);
for(i=0; prev;
}
temp=head;
     do
{
printf("%d
       ",temp->data);
       temp=temp->next;
}
while(temp!=head);
return 0;
}
