#include<stdio.h>
main()
{
	char data[100];
	int c, i;
	printf("回数と文字列を入力:");
	scanf("%d%s", &c, data);
	for (i = 0; i < c; i++)
	{
		printf("%s\t", data);
	}
}