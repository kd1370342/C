#include<stdio.h>
main()
{
	int A, B;
	A = 0;
	printf("�������āF");
	scanf("%d", &B);
	while (A < 10)
	{
		A++;
		printf("%d+%d=%d\n", B, A, B + A);
	}
}