#include<stdio.h>
main()
{
	int A, B, C, Y;
	float T;
	printf("������3����:");
	scanf("%d%d%d", &A, &B, &C);
	Y = A + B + C;
	T = (float)Y / 3;//�L���X�g(�^�ϊ�)//
	printf("���v=%d \t ����=%.2f \n", Y, T);
}