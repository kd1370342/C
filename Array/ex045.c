#include<stdio.h>
main()
{
	int goukei, i;
	//配列の先頭(何行か)は省略できる//
	int data[][3] = {{10,20,30},{1,2,3} };
	for (goukei = 0, i = 0; i <= 2; i++)
	{
		printf("data[0][%d]=%d\n", i, data[0][i]);
		goukei += data[0][i];
	}
	printf("0行目の合計=%d\n\n", goukei);
	for (goukei = 0, i = 0; i <= 2; i++)
	{
		printf("data[1][%d]=%d\n", i, data[1][i]);
		goukei += data[1][i];
	}
	printf("1行目の合計=%d\n", goukei);
}