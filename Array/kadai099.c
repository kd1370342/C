#include<stdio.h>
main()
{
	char data[100];
	int c, i;
	printf("�񐔂ƕ���������:");
	scanf("%d%s", &c, data);
	for (i = 0; i < c; i++)
	{
		printf("%s\t", data);
	}
}