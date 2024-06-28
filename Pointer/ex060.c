#include<stdio.h>
main()
{
	char date[] = "language";
	char c;
	char* p_date;
	int i;

	p_date = date;

	printf("ŒŸõ•¶š‚ÍH@");
	scanf("%c", &c);

	printf("ŒŸõŒ‹‰Ê‚ÍA");
	for (i = 0; *(p_date + i) != '\0'; i++)
	{
		if (c == *(p_date + i))
		{
			printf("%d ", i + 1);
		}
	}
	printf("•¶š–Ú‚Å‚·\n");
}