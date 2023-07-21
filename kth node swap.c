#include <stdio.h>
#include <stdlib.h>
struct List{
    int data;
    struct List*next;
    struct List*prev;
}*head,*temp,*newnode,*temp1;
int main()
{
  int n,i,k;
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    newnode=(struct List*)malloc(sizeof(struct List));
    scanf("%d",&newnode->data);
    newnode->next=NULL;
    newnode->prev=NULL;
    if(head==NULL)
    {
      head=newnode;
      temp=newnode;
      temp1=newnode;
    }
    else
    {
      temp->next=newnode;
      newnode->prev=temp;
      temp=newnode;
      temp1=newnode;
    }
  }
  scanf("%d",&k);
  temp=head;
  for(i=0;i<k-1;i++)
  {
    temp=temp->next;
  }
  temp1=head;
  while(temp1!=NULL)
  {
    temp1=temp1->next;
  }
  while(k)
  {
    temp1=temp1->prev;
  }
  temp->data=temp1->data;
  temp1->data=temp->data;
  temp=head;
  while(temp!=NULL)
  {
    printf("%d ",temp->data);
    temp=temp->next;
  }
}
