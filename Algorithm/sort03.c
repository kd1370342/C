#include<stdio.h>
main()
{
	int data[5] = { 30,7,25,16,10 };
	int i, j, w;

	for (i = 1; i < 5; i++)
	{
		for (j = i - 1; j >= 0; j--);
		{
			if (data[j + 1] >= data[j])
			{
				break;
			}
			w = data[j];
			data[j] = data[j + 1];
			data[j + 1] = w;
		}
	}
	for (i = 0; i < 5; i++)
	{
		printf("%d\n", data[i]);
	}
}