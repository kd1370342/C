#include<stdio.h>
main()
{
	int A, B, C, D, E;
	printf("秒数を入力:");
	scanf("%d", &A);
	if (A <= 5000)
	{
		if (A > 0)
		{
			B = A / 3600; C = A % 3600; D = C / 60; E = C % 60;
			printf("%d時間%d分%d秒です\n", B, D, E);
		}
		else
		{
			printf("マイナスはエラーです\n");
		}
	}
	else
	{
		printf("エラーが発生しました:入力は5000までにしてください\n");
	}
}