#include<stdio.h>
main()
{
	char A;
	printf("小文字を入力:");
	scanf("%c", &A);
	A = A - 32;
	printf("大文字に変換して%c", A);
}