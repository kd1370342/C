#include<stdio.h>
main()
{
	char ch;
	int score = 0;
	char name[20];
	FILE* fp;

	printf("�v���C���[������́F");
	scanf("%s", name);
	while (1)
	{
		printf("�X�R�A:%d ('e'�ŏI��)\n",score);
		ch = getch();
		if (ch == 'e')
		{
			break;
		}
		score++;
	}
	if (fp = fopen("score.txt", "w"))
	{
		fprintf(fp, "%s\n%d\n", name, score);

		fclose(fp);
	}
}