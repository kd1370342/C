#include<stdio.h>
main()
{
	int A;
	printf("西暦を入力：");
	scanf("%d", &A);
	if (A % 4 == 0)
	{
		printf("うるう年です");
	}
	else
	{
		printf("平年です");

	}
}