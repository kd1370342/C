#include<stdio.h>
main()
{
	int A, B, C;
	C = 0; 
	printf("数は？");
	scanf("%d", &A);
	do {
		B = 0;
		do {
			printf(" ");
			B++;
		} while (B < A - C);
		B = 0;
		do {
			printf("*");
			B++;
		} while (B < C + 1);
		printf("\n");
		 C++;
	} while (C < A);//Cの値がAに到達するまで//
}