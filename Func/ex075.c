#include<stdio.h>
void shisoku(int x, int y, int* wa, int* sa, int* sk, int* syo);

main()
{
	int a, b, c, d, e, f;
	printf("数値１？＞");
	scanf("%d", &a);
	printf("数値２？＞");
	scanf("%d", &b);
	shisoku(a, b, &c, &d, &e, &f);
	puts("数値1と数値2の四則演算");
	printf("wa=%d sa=%d sk=%d syo=%d\n", c, d, e, f);
}
void shisoku(int n1, int n2, int *n3, int *n4, int *n5, int *n6)
{
	*n3 = n1 + n2;
	*n4 = n1 - n2;
	*n5 = n1 * n2;
	*n6 = n1 / n2;
	return;
}