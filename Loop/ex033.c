#include<stdio.h>
main()
{
	int A, B, C;
	printf("数は？");
	scanf("%d", &A);
	for (B = 0, C = 0; A!= -999; C++) {
		B += A;
		printf("数は？");
		scanf("%d", &A);
	}
	printf("合計は＝%d\t平均は=%.2f\n", B, (float)B / C);
}