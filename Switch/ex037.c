#include<stdio.h>
main()
{
	char A;
	printf("���Z�q������:");
	scanf("%c", &A);
	switch (A)
	{
	case '+':printf("���Z�ł�\n");
		break;
	case'-':printf("���Z�ł�\n");
		break;
	case'*':printf("��Z�ł�\n");
		break;
	case'/':printf("���Z�ł�\n");
		break;
	case'%':printf("���܂�ł�\n");
		break;
	default:printf("���̑��ł�\n");
	}
}