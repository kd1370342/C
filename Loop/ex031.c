#include<stdio.h>
main()
{
	int A, B;
	B = 0;
	for (A = 0; A <= 10;  A++)
	{
		B += A;
		printf("1から%dまでの和=%d\n", A, B);
	}
}