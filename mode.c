#include<stdio.h>
int main()
{
int i,j,n,b,count;
printf("Enter Array Size : ");
scanf("%d",&n);
int a[n];
printf("Enter Array elements :\n");
b=n/2;
for(i=0; i<n; i++)
{
scanf("%d",&a[i]);
}

for(i=0;i<n;i++)
{
count=0;
for(j=0;j<n;j++)
{
if(a[i]==a[j])
{
count=count+1;
}
}
if(count>b)
{
printf(" the mode is: %d ",a[i]);
break;
}
}
return 0;
}



