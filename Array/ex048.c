#include<stdio.h>
main()
{
	//１フロアに3部屋ある二階建てのアパートが２つ//
	int a[2][2][3] = {
		{{3,4,5},{4,5,6} }, //アパート1//
		{{ 2, 2, 3 }, { 2,5,6 }}//アパート2//
};
	int i, j, k, goukei, g, r;
	for (i = 0,g=0,goukei=0; i < 2; i++)
	{
		g++;
		printf("アパート%d", g);
		for (j = 0,r=0; j < 2; j++)
		{
			r++;
			printf("(%d階):", r);
			for (k = 0; k < 3; k++)
			{
				printf("%d", a[i][j][k]);
				goukei += a[i][j][k];
			}
		}
		printf("\n");
	}
	printf("全体で%d人住んでいます\n",goukei);
}