#include<stdio.h>
main()
{
	int  D;
	D = 0;
	printf("数を入れて");
	scanf("%d", &D);
	while (D)
	{
		D--;
		printf("*");

	}
}