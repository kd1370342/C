#include<stdio.h>
main()
{
	int i;
	char s[100];
	printf("���������͂��ĉ�����>");
	scanf("%s", s);
	for (i = 0; s[i] != '\0'; i++)
	{
		s[i] = s[i] + 1;
	}
	printf("�Í���������́A%s\n", s);
}