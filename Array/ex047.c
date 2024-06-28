#include<stdio.h>
main()
{
	float x[3][2], goukei;
	int i, g, d;
	for (i = 0; i < 3; i++)
	{
		for (g = 0,goukei=0,d=0; g < 2; g++)
		{
			printf("x[%d][%d]=", i,g);
			scanf("%f",&x[i][g]);
			goukei += x[i][g];
			d++;
		}
		printf("%ds–Ú‚Ì•½‹Ï=%.2f\n\n",i,goukei/d);
	}
}