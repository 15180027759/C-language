#include <stdio.h>
#define N 71

int main()
{
	//freopen("test.txt", "r", stdin);
	int count, i;
	long long result[N];//ע�����ʹ�С

	result[0] = 0;
	result[1] = 1;
	for (i = 2; i < N; i++)
	{
		result[i] = result[i-1] + result[i-2];//�ȱ����������Ժ�Ͳ���ÿ�ζ�����
	}

	while (scanf("%d", &count) != EOF)
	{
		printf("%lld\n", result[count]);
	}
	return 0;
}

/**************************************************************
Problem: 1387
User: lintingbin2009
Language: C
Result: Accepted
Time:0 ms
Memory:912 kb
 ****************************************************************/
