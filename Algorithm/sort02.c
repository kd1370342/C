#include<stdio.h>
main()
{
	int data[5] = { 30,7,25,16,10 };
	int i, j, w;
	for (i = 4; i > 0; i--)
	{
		for (j = 0; j < i; j++)
		{
			if (data[j] > data[j + 1])
			{
				w = data[j];
				data[j] = data[j + 1];
				data[j + 1] = w;
			}
		}
	 }
		 for (i = 0; i < 5; i++)
	{
		printf("%d\n", data[i]);
	}
}