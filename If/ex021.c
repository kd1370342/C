#include<stdio.h>
main()
{
	int A;
	printf("整数を入力:");
	scanf("%d", &A);
	if (A < 0) {
		printf("入力値はマイナスです\n");
	}
	else {
		printf("入力値はプラスです\n");
	}
}
