#include<stdio.h>
main()
{
	int A;
	printf("月を入力：");
	scanf("%d", &A);
	if (A == 1 || A == 3 || A == 5 || A == 7 || A == 8 || A == 10 || A ==12)
	{
		printf("最終日は31日です");
	}
	else
	{
		if (A == 4 || A == 6 || A == 9 || A ==11)
		{
			printf("最終日は30日です");
		}
		else
		{
			if (A == 2)
			{
				printf("最終日は28日です");
			}

		}
	}
}