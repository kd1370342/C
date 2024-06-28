#include<stdio.h>
struct shohin_data {
	char name[20];
	int tanka;
};
void display3(struct shohin_data *syohin);

main()
{
	struct shohin_data syohin = { "ƒPƒVƒSƒ€",50 };
	display3(&syohin);
}
void display3(struct shohin_data* syohin)
{
	printf("%s\t %d\n",syohin->name, syohin->tanka);
}