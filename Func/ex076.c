#include<stdio.h>
void go_hei(int n1, int n2,int *n3,float *n4);

main()
{
	int a, b, goukei;
	float heikin;
	printf("�������Q���́�");
	scanf("%d%d", &a, &b);
	go_hei(a, b, &goukei, &heikin);
	printf("���v��%d�A���ς�%.2f", goukei, heikin);
}
void go_hei(int n1, int n2, int* n3, float* n4)
{
	*n3 = n1 + n2;
	*n4 = ((float)n1 + n2) / 2;
}