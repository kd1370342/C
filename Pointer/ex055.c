#include<stdio.h>
main()
{
	int goukei;
	float goukei2;
	int a[6] = { 11,22,33,44,55,66 };
	float b[4] = { 11.1,22.2,33.3,44.4 };
	int* p_int;
	float* p_float;

	goukei = 0;
	goukei2 = 0;

	p_int = a;
	goukei += *p_int;
	p_int++;
	goukei += *p_int;
	p_int++;
	goukei += *p_int;
	p_int++;
	goukei += *p_int;
	p_int++;
	goukei += *p_int;
	p_int++;
	goukei += *p_int;
	printf("配列a\t合計=%d\t平均%.3f\n", goukei, (float)goukei / 6);

	p_float = b;
	goukei2 += *p_float;
	p_float++;
	goukei2 += *p_float;
	p_float++;
	goukei2 += *p_float;
	p_float++;
	goukei2 += *p_float;
	printf("配列b\t合計=%.3f\t平均=%.3f\n", goukei2, goukei2 / 4);
}