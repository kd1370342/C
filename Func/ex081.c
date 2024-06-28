#include<stdio.h>
int data_p(int* p,int saize);
int data_p2(int* n,int saize);

main()
{
	int saidai, saisyou;
	int data[8] = { 6,10,8,2,9,5,1,7 };
	saidai = data_p(data,8);
	saisyou = data_p2(data,8);
	printf("Å‘å’l%d\nÅ¬’l%d\n", saidai, saisyou);
}
int data_p(int* p, int saize)
{
	int a, i;
	for (i = 1, a = *p; i < saize; i++)
	{

	}
}