#include<stdio.h>
main()
{
	char* p_ride[3] = { "car","bus","shinkansen" };
	char* p;
	int i, g;
	for (i = 0; i < 3; i++)
	{
		p = p_ride[i];//pをp_ride[i]のアドレスの先頭へ

		while (*p) {
			printf("%c", *p++);
		}
		printf("\n");
	}
}