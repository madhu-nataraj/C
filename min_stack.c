#include<stdio.h>
int a[100],top=-1;
void main()
{
    int choice=1;
    while(choice)
    {
        int b;
        printf("1. Push \n2. Pop \nEnter your choice: ");
        scanf("%d",&b);
        switch(b)
        {
            case 1:push();break;
            case 2:pop();break;
        }
        printf("Enter ur wish(0,1): ");
        scanf("%d",&choice);
    }
}
void push()
{
    if(top>=-1)
    {
        top=top+1;
        printf("Enter the data: ");
        scanf("%d",&a[top]);
    }
    display();
    min();
}
void pop()
{
    if(top<=-1)
    {
        printf("The stack is empty :) ");
    }
    else
    {
        printf("The deleted element is %d\n",a[top]);
        top=top-1;
    }
    display();
    min();
}
void display()
{
    if(top>=0)
    {
        for(int i=0;i<=top;i++)
        {
            printf("%d ",a[i]);
        }
    }
    else
    {
        printf("The stack is empty :) ");
    }
    printf("\n");
}
void min()
{
    int min=a[0];
    for(int i=0;i<=top;i++)
    {
        if(min>=a[i])
        {
            min=a[i];
        }
    }
    printf("%d\n",min);
}
