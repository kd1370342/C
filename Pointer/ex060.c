#include<stdio.h>
main()
{
	char date[] = "language";
	char c;
	char* p_date;
	int i;

	p_date = date;

	printf("検索文字は？　");
	scanf("%c", &c);

	printf("検索結果は、");
	for (i = 0; *(p_date + i) != '\0'; i++)
	{
		if (c == *(p_date + i))
		{
			printf("%d ", i + 1);
		}
	}
	printf("文字目です\n");
}