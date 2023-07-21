#include<stdio.h>
int main()
{
    int num,i,half,j,count;
    printf("Enter array size");
    scanf("%d",&num);
    int arr[num];
    half=num/2;
    for(i=0;i<num;i++)
    {
    scanf("%d",&arr[i]);
    }

    for(i=0;i<num;i++){
            count=0;
    for(j=0;j<num;j++){
            if(arr[i]==arr[j]){
                count=count+1;
                }
                }
    if(count>half){
            printf(" most frequent num is: %d ",arr[i]);
    break;
    }
    }
    return 0;
}
