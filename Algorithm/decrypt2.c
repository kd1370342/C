#include<stdio.h>
main()
{
	int i, no;
	char s[21];
	printf("���������͂��Ă���������");
	scanf("%s", s);
	i = 0;
	while (s[i] != '\0')
	{
		printf("s[%d]�̕������L�[��", i);
		scanf("%d", &no);
		s[i] = s[i] - no;
		i++;
	}
	printf("������������́A%s\n", s);
}