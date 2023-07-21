#include <stdio.h>
int main()
{
    int n;
    printf("Enter the size of the row :\n");
    scanf("%d",&n);
    int m;
    printf("Enter the size of the column :\n");
    scanf("%d",&m);
    int a[n][m];
    int i,j,k;
    printf("Enter elements of (A)matrix:\n");
    for (i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    int b[n][m];
    printf("Enter elements of (B)matrix:\n");
    for (i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
         int c[n][m];
    printf("After Multiplication:\n");
    for (i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            c[i][j]=0;
            for(k=0;k<m;k++)
            {
                c[i][j]+=a[i][k]*b[k][j];
            }
        }
    }
    for (i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
             printf("%d\t",c[i][j]);
        }
        printf("\n");
    }

}
