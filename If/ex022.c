#include<stdio.h>
main()
{
	int A;
	printf("西暦を入力:");
	scanf("%d", &A);
	if (A >=1989)
	{
		printf("平成生まれです\n");
	}
	else 
	{
		printf("昭和生まれです\n");
	}
}