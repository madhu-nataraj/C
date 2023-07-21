#include<stdio.h>
int main()
{
    int  n,a[n],i,j,p,q,range,cout;
    scanf("%d",&n);
    printf("no of ranges");
    scanf("%d",&range);
    printf("enter elements:");
    for(i=0;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<=range;i++)
    {
        scanf("%d ",&p);
        scanf("%d ",&q);
        for(j=0;j<n;j++)
        {
           if(p<=a[i]&&q>=a[i])
            {
                printf("%d",i);
                cout<<i<<end1;
            }
        }

    }

    return 0;
}
