#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int pl, cpu;
	srand(time(0));
	printf("�����o���܂���?\n(1:�O�[2:�`���L3:�p�[)>");
	scanf("%d", &pl);
	if (pl == 1) {
		printf("�v���C���[�̓O�[�ł�\n");
	}
	else {
		if (pl == 2) {
			printf("�v���C���[�̓`���L�ł�\n");
		}
		else {
			if (pl == 3) {
				printf("�v���C���[�̓p�[�ł�\n");
			}
		}
	}
	cpu = rand() % 3 + 1;
	if (cpu == 1) {
		printf("�R���s���[�^�[�̓O�[�ł�\n");
	}
	else {
		if (cpu == 2) {
			printf("�R���s���[�^�[�̓`���L�ł�\n");
		}
		else {
			if (cpu == 3) {
				printf("�R���s���[�^�[�̓p�[�ł�\n");
			}
		}
	}
	if (pl == cpu) {
		printf("�������ł�\n");
	}
	else {
		if ((pl==1&&cpu==2)
		    || (pl==2&&cpu==3)
		    || (pl==3&&cpu==1)){
			printf("�v���C���[�̏����ł�\n");
		}
		else {
			if ((pl==1&& cpu==3)
				||(pl==2&&cpu==1)
				||(pl==3&&cpu==2)) {
				printf("�v���C���[�̕����ł�\n");
			}
		}
	}
}