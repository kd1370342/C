#include<stdio.h>
main()
{
	int a, goukei, i, ret;

	goukei = 0;
	i = 0;

	printf("®”F");
	ret = scanf("%d", &a);

	while (ret != EOF)
	{
		goukei += a;
		i++;
		printf("®”F");
		ret = scanf("%d", &a);
	}
	printf("‡Œv%d\t•½‹Ï%.2f\n", goukei, (float)goukei / i);
}