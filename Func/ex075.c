#include<stdio.h>
void shisoku(int x, int y, int* wa, int* sa, int* sk, int* syo);

main()
{
	int a, b, c, d, e, f;
	printf("���l�P�H��");
	scanf("%d", &a);
	printf("���l�Q�H��");
	scanf("%d", &b);
	shisoku(a, b, &c, &d, &e, &f);
	puts("���l1�Ɛ��l2�̎l�����Z");
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