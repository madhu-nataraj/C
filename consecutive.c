#include<stdio.h>
int main()
{
    int n,i,j,temp=0,d;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i]<a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
    d=a[n-1]-a[0];
    if(d==n-1)
    {
        printf("The array contains consecutive integers from %d to %d",a[0],a[n-1]);
    }
}
