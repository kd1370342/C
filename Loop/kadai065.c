#include<stdio.h>
main()
{
	int A, B, C;
	B = 0; C = 0;
	do {
		printf("����(-999�ŏI��)");
		scanf("%d", &A);
		B += A;
		C++;

	} while (A != -999);

	printf("���v=%d\n����=%f\n", B+999, (float)B+999 /(float) C);
}