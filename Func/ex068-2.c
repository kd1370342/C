#include<stdio.h>
main()
{
	char d[256];
	char* p_d;

	printf("���������́�");
	p_d = gets(d);

	while (p_d != NULL)
	{
		printf("���͂��ꂽ�̂�%s\n", p_d);
		printf("��������́�");
		p_d = gets(d);
	}
}