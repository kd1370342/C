#include<stdio.h>
main()
{
	int A, B, C;
	printf("���Z�q�����:");
	scanf("%d", &A);
	printf("�Q�̐��������");
	scanf("%d%d", &B, &C);
	if (A == 1)
	{
		printf("%d", B + C);
	}
	else
	{
		if (A == 2)
		{
			printf("%d", B - C);
		}
		else {
			if (A == 3)
			{
				printf("%d", B * C);
			}
			else {
				if (A == 4)
				{
					printf("%d", B / C);
				}
			}

		}
	}
		
}