#include<stdio.h>
main()
{
	int A, B, C, D, E;
	printf("�b�������:");
	scanf("%d", &A);
	if (A <= 5000)
	{
		if (A > 0)
		{
			B = A / 3600; C = A % 3600; D = C / 60; E = C % 60;
			printf("%d����%d��%d�b�ł�\n", B, D, E);
		}
		else
		{
			printf("�}�C�i�X�̓G���[�ł�\n");
		}
	}
	else
	{
		printf("�G���[���������܂���:���͂�5000�܂łɂ��Ă�������\n");
	}
}