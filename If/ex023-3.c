#include<stdio.h>
main()
{
	int A, B, C;
	printf("‰‰Zq‚ğ“ü—Í:");
	scanf("%d", &A);
	printf("‚Q‚Â‚Ì®”‚ğ“ü—Í");
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