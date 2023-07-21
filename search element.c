#include<stdio.h>
int main()
{
    int n,i,j,t;
    scanf("%d",&n);
    scanf("%d",&t);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(t==a[i])
        {
            printf("The element is %d and its position is %d",a[i],i);
        }
        else
            {
                printf("Not found");
            }
    }
    return 0;
}
