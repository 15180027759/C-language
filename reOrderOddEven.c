#include <stdio.h>
//������ż����������
int test(int n)
{
    if (n % 2 == 0)
        return 0;
    return 1;
}

void oddAndEven(int *str, unsigned int len, int (*f)(int n))
{
    int tmp;
    int *end = str + len - 1;

    if (str == NULL)
        return;
    while (str < end)
    {
        while (f(*str))
            str++;
        while (!f(*end))
            end--;
        if (str < end)
        {
            tmp = *end;
            *end = *str;
            *str = tmp;
        }
    }
}
void print(int *num, int len)
{
    int i;
    for (i = 0; i < len; i++)
        printf("%d ", *(num+i));
}
