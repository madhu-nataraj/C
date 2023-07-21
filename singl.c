#include <stdio.h>
 #include <stdlib.h>

 struct node
 {
   int data;
   struct node *next;
 }*newnode,*head,*temp;
 int main()
 {
   int n;
   scanf("%d",&n);
   for(int i=0;i<n;i++)
   {
     newnode = (struct node*) (malloc(sizeof(struct node)));

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
     }
   }
   swap();
   display();
 }

 void swap()
 {
   temp=head;

   while(temp!=NULL)
   {
     struct node *temp1=temp->next;

     while(temp1!=NULL)
     {
       if((temp->data) == (temp1->data))
       {
         temp->data=temp->data*2;
         temp->next=temp1->next;
       }
       temp1=temp1->next;
     }
     temp=temp->next;
   }
 }

void display()
{
  temp=head;
   while(temp!=NULL)
   {
     printf("%d ",temp->data);
     temp=temp->next;
   }
}
