#include<stdio.h>
main()
{
	int A, B, C;
	C = 0; 
	printf("���́H");
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
	} while (C < A);//C�̒l��A�ɓ��B����܂�//
}