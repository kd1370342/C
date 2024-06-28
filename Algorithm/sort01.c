#include<stdio.h>
main()
{
	int data[5] = { 30,7,25,16,10 };
	int i, j, w;

	for (i = 0; i < 4; i++)
	{
		for (j = i + 1; j < 5; j++)
		{
			if (data[i] > data[j])
			{
				w = data[i];
				data[i] = data[j];
				data[j] = w;
			}
		}
	}
	for (i = 0; i < 5; i++)
	{
		printf("%d\n", data[i]);
	}
}