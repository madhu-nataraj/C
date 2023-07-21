#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    int a[n];
    int count=1;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(j=0;j<n;j++)
    {
        if(a[j]<a[j+1]||a[j]==a[j+1])
        {
            count++;
        }
    }
    printf("\n");
    printf("%d",count);
}
