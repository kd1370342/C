#include<stdio.h>
main()
{
	int A, B;
	printf("”‚ÍH");
	scanf("%d", &A);
	do {
		B = 0;
		do {
			printf("*");
			B++;
		}while (B < 5);
		printf("\n");
		A--;
	} while (A>0);
}