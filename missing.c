#include<stdio.h>
int main()
{
int num,i,j,sum=0,temp,sum_n;
scanf("%d",&num);
int arr[num];
for(i=0;i<num-1;i++)
{
    scanf("%d",&arr[i]);
    sum=sum+arr[i];
}
    sum_n=num*(num+1)/2;

    printf("%d",sum_n-sum);
return 0;
}
