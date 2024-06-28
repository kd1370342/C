#include<stdio.h>
main()
{
	char A;
	printf("文字を入力：");
	scanf("%c", &A);
	if (A >= 'A' && A <= 'Z')
	{
		A = A+ 32;
		printf("変換すると:%c\n",A);
	}
	else
	{
		if (A >= 'a' && A <= 'z')
		{
			A = A - 32;
			printf("変換すると:%c\n", A);
		}
		else
		{
			printf("エラー、アルファベットを入力してください");
		}
	}
}