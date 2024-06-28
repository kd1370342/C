#include<stdio.h>
#include<string.h>
struct profile {
	char name[20];
	int birth[3];
	char blood[5];
};
main()
{
	struct profile namae;
	printf("–¼‘O‚ğ“ü—Í„");
	scanf("%s", namae.name);
	printf("¶”NŒ“ú‚ğ‹ó”’‚Å‹æØ‚Á‚Ä“ü—Í„");
	scanf("%d%d%d", &namae.birth[0],&namae.birth[1],
		&namae.birth[2]);
	printf("ŒŒ‰tŒ^‚ğ“ü—Í„");
	scanf("%s", namae.blood);
	printf("%s--%d”N%dŒ%d“ú¶  ŒŒ‰tŒ^-%sŒ^\n", namae.name,
		namae.birth[0], namae.birth[1], namae.birth[2],
		namae.blood);
}