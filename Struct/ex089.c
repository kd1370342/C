#include<stdio.h>
#include<string.h>
struct profile {
	char name[20];
	int birth[3];
	char blood[5];
};
main()
{
	struct profile namae;
	printf("���O����́�");
	scanf("%s", namae.name);
	printf("���N�������󔒂ŋ�؂��ē��́�");
	scanf("%d%d%d", &namae.birth[0],&namae.birth[1],
		&namae.birth[2]);
	printf("���t�^����́�");
	scanf("%s", namae.blood);
	printf("%s--%d�N%d��%d����  ���t�^-%s�^\n", namae.name,
		namae.birth[0], namae.birth[1], namae.birth[2],
		namae.blood);
}