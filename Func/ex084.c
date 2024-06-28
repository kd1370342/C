#include<stdio.h>
void gyaku(char* p, char* n);

main()
{
	char str1[256], str2[256];
	printf("•¶Žš—ñ„");
	gets(str1);
	gyaku(str1, str2);
	printf("str1:%s\nstr2:%s\n", str1, str2);
}
void gyaku(char* p, char* n)
{
	int i, j;
	for (i = 0; *(p + i) != '\0'; i++);
	for (i--, j = 0; i >= 0; i--, j++)
	{
		*(n + j) = *(p + i);
	}
	*(n + j) = '\n';
}