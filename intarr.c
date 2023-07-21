#include<stdio.h>
int main()
{
    int num,k,power,i;
    printf("Enter value to power");
    scanf("%d",&num);
    printf("\n Enter power value");
    scanf("%d",&power);
    printf("\n Enter number of values to print");
    scanf("%d",&k);
    int total1=1;
    for(i=1;i<=k;i++)
    {
    total1=total1*10;
    }
    printf("%d",total1);

    int total=1;
    for(i=1;i<=power;i++)
    {
    total=total*num;
    }
    total=total%total1;

    printf("\n%d",total);
return 0;
}
