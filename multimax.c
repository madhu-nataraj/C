#include<stdio.h>
int main()
{

    int i,j,k,n,m,p,q,a[i][j],b[i][j],c[i][j];
    scanf("%d",&m);
    scanf("%d",&n);
    scanf("%d",&p);
    scanf("%d",&q);
if(n==p)
for(i=0;i<m;i++)
{
    for(j=0;j<n;j++)
    {
        scanf("%d",a[i][j]);
    }
printf("%d",a[i][j]);
}
for(i=0;i<p;i++)
{
    for(j=0;j<q;j++)
    {
        scanf("%d",b[i][j]);
    }
}
}
