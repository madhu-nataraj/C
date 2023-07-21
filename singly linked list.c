#include<stdio.h>
#include<stdlib.h>
struct first
{
    int one;
    struct first*next;
}*head,*temp,*newnode;
int main()
{
    int n,i,count=0;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        newnode=(struct first*)malloc(sizeof(struct first));
        scanf("%d",&newnode->one);
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
    temp=head;
    while(temp!=NULL)
    {
        printf("%d",temp->one);
        temp=temp->next;
        count++;
    }
    printf("%d",count);
    return 0;
}
void del_end()
{
    temp=head;
    do
    {
        if(temp->next==tail)
        {
            tail=temp;
            tail->next=head;
        }
        temp=temp->next;
    }while(temp!=head);
    display();
}
void insert_mid()
{
    int pos;
    printf("Enter the position: ");
    scanf("%d",&pos);
    temp=head;
    for(int i=0; i<=pos; i++)
    {
        if(i==pos)
        {
            struct node* newnode;
            newnode->next=NULL;
            newnode=(struct node*)(malloc(sizeof(struct node)));
            printf("Enter the data to be inserted in the desired position: ");
            scanf("%d",&newnode->data);
            temp->next=newnode;
            newnode->next=temp->next;
            temp=newnode;
        }
        temp=temp->next;
    }
    display();
