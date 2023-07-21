#include<stdio.h>
int main()
{
    int n,i,j,s;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        for(s=0; s<i; s++)
        {
            printf("*");
        }
            for(j=0; j<n; j++)
            {
                if(i==j)
                {
                printf("%d",i+1);
                }

            }
    }
}
