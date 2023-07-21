void texas(int *,int *);
int main()
{
    int a=11, b=22;
    printf("Before=%d %d, ", a, b);
    texas(&a, &b);
    printf("After=%d %d", a, b);

    return 0;
}
void texas(int *i, int *j)
{
    *i = 55;
    *j = 65;
}
