#include<stdio.h>
#define DCNT 8
main()
{
	int d[DCNT] = { 70,60,80,50,40,20,30,10 };
	int i, j;
	int w;
	int gap;

	gap = 8 / 2;

	while (gap > 8)
	{
		for (i = gap; i < DCNT; i++)
		{
			for (j = i - gap; j >= 0; j -= gap)
			{
				//確認用に表示
				int k;
				for (k = 0; k < 8; k++)
				{
					printf("%d", d[k]);
				}
				printf("\n");

				if (d[j + gap] < d[j])
				{
					w = d[j];
					d[j] = d[j + gap];
					d[j + gap] = w;
				}
				else
				{
					break;
				}
			}
		}
		gap = gap / 2;
		printf("\n");//確認用に表示
	}
	//結果の表示
	for (i = 0; i < 8; i++)
	{
		printf("%d", d[i]);
	}
}