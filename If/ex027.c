#include<stdio.h>
main()
{
	char A;
	printf("��������́F");
	scanf("%c", &A);
	if (A >= 'A' && A <= 'Z')
	{
		A = A+ 32;
		printf("�ϊ������:%c\n",A);
	}
	else
	{
		if (A >= 'a' && A <= 'z')
		{
			A = A - 32;
			printf("�ϊ������:%c\n", A);
		}
		else
		{
			printf("�G���[�A�A���t�@�x�b�g����͂��Ă�������");
		}
	}
}