#include<stdio.h>
main()
{
	int goukei, i;
	//�z��̐擪(���s��)�͏ȗ��ł���//
	int data[][3] = {{10,20,30},{1,2,3} };
	for (goukei = 0, i = 0; i <= 2; i++)
	{
		printf("data[0][%d]=%d\n", i, data[0][i]);
		goukei += data[0][i];
	}
	printf("0�s�ڂ̍��v=%d\n\n", goukei);
	for (goukei = 0, i = 0; i <= 2; i++)
	{
		printf("data[1][%d]=%d\n", i, data[1][i]);
		goukei += data[1][i];
	}
	printf("1�s�ڂ̍��v=%d\n", goukei);
}