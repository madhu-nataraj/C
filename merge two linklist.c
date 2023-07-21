#include<stdio.h>
struct node
{
    int data;
    struct node*next;
}*head1,*head2,*head3,*temp,*newnode,*dummy,*prev,*temp1;
int main()
{
    int n,i,t,j,count=0;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        scanf("%d",&newnode->data);
        newnode->next=NULL;
        if(head1==NULL)
        {
            head1=newnode;
            temp=newnode;
        }
        else
        {
            temp->next=newnode;
            temp=newnode;
        }
    }
    for(i=0; i<n; i++)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        scanf("%d",&newnode->data);
        newnode->next=NULL;
        if(head2==NULL)
        {
            head2=newnode;
            temp=newnode;
        }
        else
        {
            temp->next=newnode;
            temp=newnode;

        }
    }
    temp=head1;
    temp=head2;
    dummy=(struct node*)malloc(sizeof(struct node));
    dummy->next=NULL;
    prev=dummy;
    head3=dummy;
    while(head1&&head2!=NULL)
    {
        if(head1->data < head2->data)
        {
            prev->next=head1;
            head1=head1->next;
            prev=prev->next;
        }
        else
        {
            prev->next=head2;
            head2=head2->next;
            prev=prev->next;
        }
    }
    temp1=head3;
    while(temp1!=NULL)
    {
        printf("%d",temp1->data);
        temp1=temp1->next;
    }
    return 0;
}
