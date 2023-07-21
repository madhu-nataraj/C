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
        for(j=i+1;j<n;j++)
        {
            if(a[i]+a[j]==t)
            {
                printf("pair found(%d,%d)",a[i],a[j]);
            }
        }
    }
}
