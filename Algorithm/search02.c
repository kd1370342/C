#include<stdio.h>
main()
{
	int i, s;
	int d[11] = { 10,5,30,77,16,3,47,29,37,33,55 };
	printf("�T���l����͂��Ă�������>");
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
		printf("������Ȃ�����\n");
	}
	else {
		printf("�z���%d�ԖڂɌ�������\n",i);
	}
}