#include<stdio.h>
main()
{
	//�P�t���A��3���������K���ẴA�p�[�g���Q��//
	int a[2][2][3] = {
		{{3,4,5},{4,5,6} }, //�A�p�[�g1//
		{{ 2, 2, 3 }, { 2,5,6 }}//�A�p�[�g2//
};
	int i, j, k, goukei, g, r;
	for (i = 0,g=0,goukei=0; i < 2; i++)
	{
		g++;
		printf("�A�p�[�g%d", g);
		for (j = 0,r=0; j < 2; j++)
		{
			r++;
			printf("(%d�K):", r);
			for (k = 0; k < 3; k++)
			{
				printf("%d", a[i][j][k]);
				goukei += a[i][j][k];
			}
		}
		printf("\n");
	}
	printf("�S�̂�%d�l�Z��ł��܂�\n",goukei);
}