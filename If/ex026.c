#include<stdio.h>
main()
{
	int A;
	printf("������́F");
	scanf("%d", &A);
	if (A == 1 || A == 3 || A == 5 || A == 7 || A == 8 || A == 10 || A ==12)
	{
		printf("�ŏI����31���ł�");
	}
	else
	{
		if (A == 4 || A == 6 || A == 9 || A ==11)
		{
			printf("�ŏI����30���ł�");
		}
		else
		{
			if (A == 2)
			{
				printf("�ŏI����28���ł�");
			}

		}
	}
}