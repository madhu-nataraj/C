#include<stdio.h>
int main()
{
    int n,i,j,sum=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
            sum=sum+a[i];
            if(sum==0)
            {
                printf("\n sub array with zero sum exists");
            }
    }
}
