#include<stdio.h>
#include<stdlib.h>
struct node{
    char data[5];
    struct node*next;
}*top=NULL,*temp,*newnode;
int main()
{
    int choice;
    while(1)
    {
        printf("\n1.push");
        printf("\n2.pop");
        printf("\n3.peek");
        printf("\n4.display");
        printf("\nEnter your choice:(1,2,3,4)");
        scanf("%d",& choice);
        switch(choice)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            peek();
            break;
        case 4:
            display();
            break;
        default:
            printf("INVALID INPUT");
        }
    }
    return 0;
}
void push()
{
    newnode=(struct node*)malloc(sizeof(struct node));
    scanf("%s",&newnode->data);
    newnode->next=top;
    top=newnode;
}
void pop()
{
    temp=top;
    if(top==NULL)
    {
        printf("stack is empty");
    }
    else
    {
        for(int i=0;i<3;i++)
        {
        printf("%s ",temp->data);
        top=top->next;
        free(temp);
        }
    }
}
void peek()
{
    temp=top;
    if(top==NULL)
    {
        printf("stack is empty");
    }
    else
    {
        printf("%d",temp->data);
    }
}
void display()
{
    if(top==NULL)
    {
        printf("stack is empty");
    }
        temp=top;
        while(temp!=NULL)
        {
            printf("%s\n",temp->data);
            temp=temp->next;
        }
}
