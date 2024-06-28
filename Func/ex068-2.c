#include<stdio.h>
main()
{
	char d[256];
	char* p_d;

	printf("•¶š—ñ‚ğ“ü—Í„");
	p_d = gets(d);

	while (p_d != NULL)
	{
		printf("“ü—Í‚³‚ê‚½‚Ì‚Í%s\n", p_d);
		printf("•¶š—ñ“ü—Í„");
		p_d = gets(d);
	}
}