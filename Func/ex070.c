#include<stdio.h>
int add(int a, int b);
main()
{
	int a, b, kotae;
	printf("������2���́F");
	scanf("%d%d", &a, &b);
	kotae = add(a, b);
	printf("���v��%d�ł�\n");
}
int add(int a, int b)
{
	int ans;
	ans = a + b;
	return(ans);
}