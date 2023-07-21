#include<stdio.h>
int main()
{
    char str[] = "Rathinam Technical Campus";
    char* token = strtok(str, " ");
    while (token != NULL)
        {
        printf(" % s\n", token);
        token = strtok(NULL, " ");
        }
        printf("%s",str[1]);
    return 0;
}
