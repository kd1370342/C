#include<stdio.h>
main()
{
	char d[256];
	char* p_d;

	printf("文字列を入力＞");
	p_d = gets(d);

	while (p_d != NULL)
	{
		printf("入力されたのは%s\n", p_d);
		printf("文字列入力＞");
		p_d = gets(d);
	}
}