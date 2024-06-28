#include<stdio.h>
#define TBL_END 5;
int tbl_goukei4(int* p);

main()
{
	int a[] = { 10,20,30,40,50 };
	int goukei;
	goukei = tbl_goukei4(a);
	printf("goukei=%d\n", goukei);
}
int tbl_goukei4(int* p)
{
	int goukei, i;

	for (i = 0, goukei = 0; i < TBL_END; i++)
	{
		goukei += *(p + i);
	}
	return goukei;
}