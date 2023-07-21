#include<stdio.h>
int main()
{
    int n,min=0,i,j,temp;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        min=i;
        for(j=i+1;j<n;j++)
        {
            if(a[min]>a[j])
            {
                min=j;
            }
        }
    if(min!=i)
    {
        temp=a[i];
        a[i]=a[min];
        a[min]=temp;
    }
    }
    for(i=0;i<n;i++){
    printf("%d",a[i]);
    }
}
