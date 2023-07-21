#include<stdio.h>
int main()
{
int N,sum,cnt;
scanf("%d",&N);
int b[N],k=0;
for(int i=1;i<=N;i++)
{
    for(int j=2;j<=N/2;j++)
    {
        if(i%j==0)
        {
           cnt=1;
        }
        if(cnt!=1)
        {
            b[k]=i;
            k++;
        }
    }
}
    for(int i=0;i<k;i++)
    {
        sum=sum+b[i];
        if(sum==N)
            break;
        else
            cnt++;
    }
    printf("%d",cnt);
return 0;
}
