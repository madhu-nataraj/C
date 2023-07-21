#include<stdio.h>
int main()
{
    int n,i,j,s;
    scanf("%d",&n);
    for(i=n/2; i<=n; i++)
    {
        for(j=1; j<n-i; j++)
        {
            printf(" ");
        }
        for(j=1; j<=i; j++)
        {
            printf("*");
        }

        for(j=1; j<=n-i; j++)
        {
            printf(" ");
        }

        for(j=1; j<=i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for(i=0;i<n-6;i++)
    {
        printf("*");
    }
    printf("i love RATHINAM");
     for(i=0;i<n/2+2;i++)
    {
        printf("*");
    }
    printf("\n");
    for(i=n; i>=1; i--)
    {
        for(j=i; j<n; j++)
        {
            printf(" ");
        }

        for(j=1; j<=(i*2)-1; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
