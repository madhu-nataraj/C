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
    for(i=0;i<n;i++)
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
