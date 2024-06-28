#include<stdio.h>
int goukei(int n1, int n2, int n3);
float heikn(int n1,int n2,int n3);
main()
{
	int a, b, c, kotae;
	float h;
	printf("®”‚R‚Â“ü—Í„");
	scanf("%d%d%d", &a, &b, &c);
	kotae = goukei(a, b, c);
	h = heikin(a, b, c);
	printf("‡Œv‚Í%d\t•½‹Ï‚Í%.2f", kotae, h);
}
goukei(int n1, int n2, int n3)
{
	int ans;
	ans = n1 + n2 + n3;
	return(ans);
}
heikin(int n1, int n2, int n3)
{
	float e;
	e = (n1 + n2 + n3) / 3.0;
	return(e);
}