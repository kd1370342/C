#include<stdio.h>
struct syohin_data {
	char name[20];
	int tanka;
	int kosuu;
};

main()
{
	struct syohin_data syohin[3] = { {"エンピツ",30,5},
		{"ケシゴム",50,2},{"フデバコ",500,3} };
	struct syohin_data *p_s;
	p_s = syohin;

	int i;
	for (i = 0; i < 3; i++, p_s++)
	{
		printf("商品名：%s\t", p_s->name);
		printf("単価：%d\t", p_s->tanka);
		printf("個数：%d\t", p_s->kosuu);
		printf("金額：￥ %d\n", p_s->tanka * p_s->kosuu);
	}
}