#include<stdio.h>
main()
{
	int i, s;
	int d[11] = { 10,5,30,77,16,3,47,29,37,33,55 };
	printf("探索値を入力してください>");
	scanf("%d", &s);
	/*i = 0;
	while (s != d[i]) {
		i++;
	}*/
	for (i = 0; s != d[i]; i++)
	{
		if (i >= 10) {
			break;
		}
	}
	if (i >= 10)
	{
		printf("見つからなかった\n");
	}
	else {
		printf("配列の%d番目に見つかった\n",i);
	}
}