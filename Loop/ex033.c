#include<stdio.h>
main()
{
	int A, B, C;
	printf("”‚ÍH");
	scanf("%d", &A);
	for (B = 0, C = 0; A!= -999; C++) {
		B += A;
		printf("”‚ÍH");
		scanf("%d", &A);
	}
	printf("‡Œv‚Í%d\t•½‹Ï‚Í=%.2f\n", B, (float)B / C);
}