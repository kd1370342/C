#include<stdio.h>
main()
{
	char date[] = "orange";
	int i;
	for (i = 0; date[i] != '\0'; i++);
	printf("������:%s\n",date);
	printf("��������%d����\n", i);
}