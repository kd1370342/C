#include<stdio.h>
main()
{
	char data[100], data2[100], data3[100];
	int i;
	printf("文字列１を入力:");
	scanf("%s", data);
	printf("文字列２を入力:");
	scanf("%s", data2);
	printf("moji1=%s\tmoji2=%s\n", data, data2);

	printf("入れ替えると\n");
	for (i = 0; data3[i] = data[i]; i++);

	for (i = 0; data[i] = data2[i]; i++);

	for (i = 0; data2[i] = data3[i]; i++);

	printf("moji1=%s\tmoji2=%s\n", data, data2);
}