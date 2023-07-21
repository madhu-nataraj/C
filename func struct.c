#include<stdio.h>
#include<stdlib.h>
struct first
{
    int one;
    struct first*next;
}*head,*temp,*newnode;
int main()
{
    int choice;
    while(1)
    {
        printf("\n1.create an array");
        printf("\n2.Display");
        printf("\n3.count");
        printf("\n6.exit");
        printf("\nEnter your choice:(1,2,3,4)");
        scanf("%d",& choice);
        switch(choice)
        {
        case 1:
            create();
            break;
        case 2:
            Display();
            break;
        case 3:
            insertbeg();
            //count();
            break;
        case 4:
            insend();
            break;
        case 5:
            insmid();
            break;
        case 6:
            Exit();
            break;
        default:
            printf("INVALID");
        }
    }
    return 0;
}
void create()
{
    int n;
    printf("num of elements");
    scanf("%d",&n);
    for(int i=0; i<n; i++)
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

}

void insertbeg()
{
    newnode=(struct first*)malloc(sizeof(struct first));
    scanf("%d",&newnode->one);
    newnode->next=head;
    head=newnode;
}
void insend()
{
    newnode=(struct first*)malloc(sizeof(struct first));
    scanf("%d",&newnode->one);
    newnode->next=NULL;
    temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=newnode;
}
void insmid()
{
    int pos,j;
    newnode=(struct first*)malloc(sizeof(struct first));
    scanf("%d",&newnode->one);
    scanf("%d",&pos);
    for(j=1; j<pos; j++)
    {
        temp=temp->next;
        temp->next=newnode;
        newnode->next=temp->next;
    }
}
void delete()
{
    temp=head;
    head=head->next;
    temp->next=NULL;
    free(temp);
}
void Display()
{
    temp=head;
    while(temp!=NULL)
    {
        printf("%d",temp->one);
        temp=temp->next;
    }
}
void count()
{
    int count;
    temp=head;
    while(temp!=NULL)
    {
        temp=temp->next;
        count++;
    }
    printf("%d",count);
}


