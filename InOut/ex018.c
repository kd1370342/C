#include<stdio.h>
main()
{
	int A, B, C, Y;
	float T;
	printf("整数を3個入力:");
	scanf("%d%d%d", &A, &B, &C);
	Y = A + B + C;
	T = (float)Y / 3;//キャスト(型変換)//
	printf("合計=%d \t 平均=%.2f \n", Y, T);
}