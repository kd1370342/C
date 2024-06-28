#include<stdio.h>
int tbl_goukei3(int tbl[],int number);

main()
{
	int a[] = { 10,20,30,40,50 };
	int goukei;
	goukei = tbl_goukei3(a,5);
	printf("goukei=%d\n", goukei);
}
int tbl_goukei3(int tbl[], int number)
{
	int goukei, i;
	for (i = 0, goukei = 0; i < number; i++)
	{
		goukei += tbl[i];
	}
	return goukei;
}