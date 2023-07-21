#include<stdio.h>
int main()
{
    int num,i,j,count,k;
    printf("Enter array size");
    scanf("%d",&num);
    int arr[num];
    for(i=0;i<num;i++)
    {
    scanf("%d",&arr[i]);
    }
    int temp;
    for(i=0;i<num;i++){
            for(j=i+1;j<num;j++){
                if(arr[i]>arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
                }
            }
    }
    int mid=num/2;
    printf("\nEnter the number to k ");
    scanf("%d",&k);
    if(arr[mid]==k)
        {
          printf("\n Number %d found in array",arr[mid]);
        }

    else if(:
    {
    for(i=mid;i<0;i--){
            if(arr[i]==k){
        printf("\n Number %d found in array",arr[i]);
        }
    }
    }

    else if:
        {
    for(i=mid;i<num;i++){
            if(arr[i]==k){
        printf("\n Number %d found in array",arr[i]);
        break;
        }
    }
    }
    else {
        printf("\n not found");
    }

 return 0;
}
}
