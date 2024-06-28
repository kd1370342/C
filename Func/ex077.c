#include<stdio.h>
void saiti(int n1, int n2, int n3);

main()
{
	int a, b, c;
	printf("整数を3つ入力＞");
	scanf("%d%d%d", &a, &b, &c);
	saiti(a, b, c);
}
void saiti(int n1, int n2, int n3)
{
	if (n1 > n2)
	{
		if (n1 > n3)
		{
			printf("最大値＝%d\t", n1);
		}
		else
		{
			printf("最大値＝%d\t", n3);
		}
	}
	else
	{
		if (n2 > n1)
		{
			if (n2 > n3)
			{
				printf("最大値＝%d\t", n2);
			}
			else
			{
				printf("最大値＝%d\t", n3);
			}
		}
	}
	if (n1 < n2)
	{
		if (n1 < n3)
		{
			printf("最小値＝%d\n", n1);
		}
		else
		{
			printf("最小値＝%d\n", n3);
		}
	}
	else
	{
		if (n1 > n2)
		{
			if (n3 > n2)
			{
				printf("最小値＝%d\n", n2);
			}
			else
			{
				printf("最小値＝%d\n", n3);
			}
		}
	}
}