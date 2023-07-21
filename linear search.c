#include<stdio.h>
int main()
{
    int num,i,find,j,count;
    printf("Enter array size");
    scanf("%d",&num);
    int arr[num];
    for(i=0;i<num;i++)
    {
    scanf("%d",&arr[i]);
    }

    printf("\nEnter the number to find ");
    scanf("%d",&find);
    for(i=0;i<num;i++)
    {
        if(find==arr[i]){
         printf("\n Number %d found in array",arr[i]);
         break;
        }
    }

 return 0;
}
