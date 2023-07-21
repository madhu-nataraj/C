#include<stdio.h>
int main()
{
    int i,j,count=0;
    char a[]=" ";
    char b[]=" ";
    char d[]=" ";
    scanf("%s",&a);
    scanf("%s",&b);
    scanf("%s",&d);
    int al=strlen(a);
    int bl=strlen(b);
    int du=strlen(d);
    int cl=al+bl;
    printf("%d",al);
    printf("%d",bl);
    printf("%d",du);
    char rel[6];
    for(i=0;i<6;i++)
    {
        scanf("%s",&rel[i]);
    }
    for(i=1;i<al;i++)
    {
        for(j=1;j<bl;j++)
        {
            if(a[i]!=b[j])
            {
                count=count+1;
            }
        }
    }
    printf("%d",count);
    int flames=cl%6;
    printf(rel[flames]);
}
