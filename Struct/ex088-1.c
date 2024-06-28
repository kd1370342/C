#include<stdio.h>
#include<string.h>
struct syouhin_data
{ 
	char name[20]; 
	int tanka; 
};
main()
{
	//構造体変数のメンバ値の初期化
	struct syouhin_data syouhin1, syouhin2 = {"ボールペン",100};
	strcpy(syouhin1.name, "エンピツ");
	syouhin1.tanka = 30;
	printf("syouhin1.name=%s\n", syouhin1.name);
	printf("syouhin1.tanka=%d\n", syouhin1.tanka);
	printf("syouhin2.name=%s\n", syouhin2.name);
	printf("syouhin2.tanka=%d\n", syouhin2.tanka);
}