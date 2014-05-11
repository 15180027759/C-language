#include <stdio.h>
//��Ҫ�ķ��������������λ����������󲻽�λ�ļӷ������忴��ָoffer����Ľ���

unsigned int Add(unsigned int a, unsigned int b)
{
    unsigned int sum, carry;

    do
    {
        sum = a ^ b;
        carry = (a & b) << 1;

        a = sum;
        b = carry;
    } while (b != 0);

    return a;
}
int main()
{
    //freopen("test.txt", "r", stdin);

    unsigned int n, m;
    while (scanf("%u%u", &n, &m) != EOF)
    {
        printf("%u\n", Add(n, m));
    }
    return 0;
}

/**************************************************************
    Problem: 1507
    User: lintingbin2009
    Language: C
    Result: Accepted
    Time:10 ms
    Memory:912 kb
****************************************************************/
