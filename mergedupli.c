#include<stdio.h>
#include<conio.h>
int main()
{
    int a[10],b[10],c[10],i,j,n,n1,temp;
    scanf("%d",&n);
    printf("enter array 1");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        c[i]=a[i];
    }
    scanf("%d",&n1);
    printf("enter array 2");
    for(i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
        c[i]=b[j];
    }
    int x=n+n1;
for(i=0;i<x;i++)
    {
        for(j=i+1;j<x;j++)
        {
            if(c[j]>c[j+1])
            {
                temp=c[j];
                c[j]=c[j+1];
                c[j+1]=temp;
            }
        }
         for(i=0;i<n+n1;i++)
        {
        if(c[i]==c[i+1])
        {
            temp=c[i];
        }
        else
        printf("%d ",c[i]);
        }
    }
}

