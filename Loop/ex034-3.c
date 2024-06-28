#include<stdio.h>
main()
{
	int A, B, C;
	C = 0;
	printf("”‚ÍH");
	scanf("%d", &A);
	do {
		B = 0; 
		do {
			printf("*");
			B++;
		} while (B < C + 1);
		printf("\n");
		A--; C++;
	} while (A > 0);
}
