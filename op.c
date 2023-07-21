#include<stdio.h>

int _main (int i,int j)
{
    while(i<=j)
    {
        if(i<j)
        i=i+1;
        else
        j=j-i;
        j=j-2;
    }
    return j;

}

    int main()
    {
        int k=_main(12,175);
        printf("%d",k);
        return 0;
    }
