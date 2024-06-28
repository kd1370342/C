#include<stdio.h>
main()
{
	int i, no;
	char s[21];
	printf("•¶š—ñ‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢„");
	scanf("%s", s);
	i = 0;
	while (s[i] != '\0')
	{
		printf("s[%d]‚Ì•œ†‰»ƒL[„", i);
		scanf("%d", &no);
		s[i] = s[i] - no;
		i++;
	}
	printf("•œ†‰»•¶š—ñ‚ÍA%s\n", s);
}