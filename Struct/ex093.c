#include<stdio.h>
struct syohin_data {
	char name[20];
	int tanka;
	int kosuu;
};

main()
{
	struct syohin_data syohin[3] = { {"�G���s�c",30,5},
		{"�P�V�S��",50,2},{"�t�f�o�R",500,3} };
	struct syohin_data *p_s;
	p_s = syohin;

	int i;
	for (i = 0; i < 3; i++, p_s++)
	{
		printf("���i���F%s\t", p_s->name);
		printf("�P���F%d\t", p_s->tanka);
		printf("���F%d\t", p_s->kosuu);
		printf("���z�F�� %d\n", p_s->tanka * p_s->kosuu);
	}
}