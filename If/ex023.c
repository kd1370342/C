#include<stdio.h>
main()
{
	int A, B, C, D, E;
	printf("•b”‚ğ“ü—Í:");
	scanf("%d", &A);
	if (A <= 5000)
	{
		B = A / 3600; C = A % 3600; D = C / 60; E = C % 60;
		printf("%dŠÔ%d•ª%d•b‚Å‚·\n", B, D, E);
	}
	else
	{
		printf("ƒGƒ‰[‚ª”­¶‚µ‚Ü‚µ‚½:“ü—Í‚Í5000‚Ü‚Å‚É‚µ‚Ä‚­‚¾‚³‚¢\n");
	}
}