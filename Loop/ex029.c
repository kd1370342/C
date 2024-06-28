#include<stdio.h>
main()
{
	int A, D;
	A = 0;
	printf("数を入れて");
	scanf("%d", &D);
	while (A < D)
	{
		A++;//A+=1でもA++でもいい(カウントアップ(インクリメント))
		printf("*");

	}
}