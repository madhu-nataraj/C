#include<stdio.h>
int main()
{
int num,i,j,temp;
scanf("%d",&num);
int arr[num];
for(i=0;i<num;i++)
{
    scanf("%d",&arr[i]);
}
for (i=0;i<num;i++)
{
for(j=0;i+1;j++)
{
    if(arr[i]>arr[j])
    {
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
}
printf("%d",temp);
}
return 0;
}

