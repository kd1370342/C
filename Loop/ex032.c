#include<stdio.h>
main()
{
	int A, B;
	printf("��������:");
	scanf("%d", &A);
	for (B=1; B <= 5; B++)
	{
		printf("%d ", A * B);
	}
}