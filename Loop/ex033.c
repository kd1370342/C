#include<stdio.h>
main()
{
	int A, B, C;
	printf("���́H");
	scanf("%d", &A);
	for (B = 0, C = 0; A!= -999; C++) {
		B += A;
		printf("���́H");
		scanf("%d", &A);
	}
	printf("���v�́�%d\t���ς�=%.2f\n", B, (float)B / C);
}