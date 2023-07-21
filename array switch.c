#include<stdio.h>
#define maxsize 10
int a[maxsize],n;
int main()
{
    for(int i=0;i<6;i++)
    {
    int choice;
    printf("\n1.create an array");
    printf("\n2.Display");
    printf("\n3.Insert into an array");
    printf("\n4.Delete an element");
    printf("\n5.Search the element");
    printf("\n6.exit");
    printf("\nEnter your choice:(1,2,3,4,5,6)");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1:create();
           break;
    case 2:Display();
           break;
    case 3:Insert();
           break;
    case 4:Delete();
            break;
    case 5://search();
           break;
    case 6://Exit();
           break;
    default:
    printf("INVALID");
    }
    }
}
void create()
{
    printf("num of elements");
    scanf("%d",&n);
    printf("elements are");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
}
void Display()
{
    create();
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }

}
int Insert()
{
    create();
    int e,p;
    printf("enter the element to be inserted");
    scanf("%d",&e);
    printf("position of element");
    scanf("%d",&p);
    for(int i= n;i>=p;i--)
    {
        a[i]=a[i-1];
    }
    a[p-1]=e;
    for(int i=0;i<n+1;i++)
    {
        printf("%d",a[i]);
    }
}
int Delete()
{
    create();
    int el=3;
    for (int i=po; i< n-1;i++)
    {
        a[i] = a[i + 1];
    }
    for(int i=0;i<n-1;i++)
    {
        printf("%d",a[i]);
    }
}
