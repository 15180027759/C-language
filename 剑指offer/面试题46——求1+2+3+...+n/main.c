#include <stdio.h>

typedef unsigned int (*fun)(int n);

unsigned int over(int n)
{
    return 0;
}

//����˼·��Ҫ���ú���ָ��ķ�������nΪ0ʱ!n�պ�Ϊ1������һ��С���ɡ�
unsigned int factorial(int n)
{
    fun function[2] = {factorial, over};
    return n + function[!n](n - 1);
}

int main()
{
    //freopen("test.txt", "r", stdin);

    unsigned int n;
    while (scanf("%u", &n) != EOF)
    {
        printf("%u\n", factorial(n));
    }
    return 0;
}

/**************************************************************
    Problem: 1506
    User: lintingbin2009
    Language: C
    Result: Accepted
    Time:360 ms
    Memory:1208 kb
****************************************************************/
