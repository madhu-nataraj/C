#include<stdio.h>
int main()
{
int n,i,j;
scanf("%d",&n);
int arr[n][n];
int rowmin=1,rowmax=n,colmin=1,colmax=n;
int count=1;
while(rowmin<=rowmax)
    {
        for(i=colmin;i<=colmax;i++)
        {
            arr[rowmin][i]=count++;
        }
        for(i=rowmin+1;i<=rowmax;i++)
        {
            arr[i][colmax]=count++;
        }
        for(i=colmax-1;i>=colmin;i--)
        {
            arr[rowmax][i]=count++;
        }
        for(i=rowmax-1;i>rowmin;i--)
        {
            arr[i][colmin]=count++;
        }
    rowmin++;
    colmin++;
    colmax--;
    rowmax--;
    }
for(int i=1;i<=n;i++)
{
    for(int j=1;j<=n;j++)
    {
        printf("%d",arr[i][j]);
        printf(" ");
    }
    printf("\n");
}
return 0;
}
