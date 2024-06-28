#include<stdio.h>
main()
{
	int goukei, i, j;
	int data[2][3] = { {10,20,30},{1,2,3} };

	for (i = 0; i <= 1; i++)
	{
		for (j = 0, goukei = 0; j <= 2; j++)
		{
			printf("data[%d][%d]=%d\n",i, j, data[i][j]);
			goukei += data[i][j];
		}
		printf("%ds–Ú‚Ì‡Œv=%d\n\n",i, goukei);	
	}
}