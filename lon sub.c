#include<stdio.h>
#include<stdlib.h>
void main()
{
    int n;
    printf("\nENTER THE SIZE: ");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int max=0,sum=0;
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n-1;j++)
        {

            max=sum;
            if((a[j]+1)==(a[j+1]))
            {
               sum=a[i]+a[j+1];
               if(max<sum)
               {
                   max=sum;
               }
            }
            else
            {
                sum=a[i]+a[j+1];
                if(max<sum)
               {
                   max=sum;
               }
            }
        }
    }
    printf("%d",max);
}
