#include<stdio.h>
void saiti(int n1, int n2, int n3);

main()
{
	int a, b, c;
	printf("������3���́�");
	scanf("%d%d%d", &a, &b, &c);
	saiti(a, b, c);
}
void saiti(int n1, int n2, int n3)
{
	if (n1 > n2)
	{
		if (n1 > n3)
		{
			printf("�ő�l��%d\t", n1);
		}
		else
		{
			printf("�ő�l��%d\t", n3);
		}
	}
	else
	{
		if (n2 > n1)
		{
			if (n2 > n3)
			{
				printf("�ő�l��%d\t", n2);
			}
			else
			{
				printf("�ő�l��%d\t", n3);
			}
		}
	}
	if (n1 < n2)
	{
		if (n1 < n3)
		{
			printf("�ŏ��l��%d\n", n1);
		}
		else
		{
			printf("�ŏ��l��%d\n", n3);
		}
	}
	else
	{
		if (n1 > n2)
		{
			if (n3 > n2)
			{
				printf("�ŏ��l��%d\n", n2);
			}
			else
			{
				printf("�ŏ��l��%d\n", n3);
			}
		}
	}
}