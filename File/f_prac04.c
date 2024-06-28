#include<stdio.h>
#define sol_num 3  //�����̐�

	typedef struct
	{
		char wname[20];
		int bullet;
		float atk;
	} weapon;

	typedef struct
	{
		char name[20];
		int hp;
		weapon wpn;
	}soldier;
	void SetInfo(soldier* s, char* filename);
	void Display(soldier* s);

	main()
	{
		soldier sols[sol_num];
		SetInfo(sols, "file04.txt");
		Display(sols);
	}
	void SetInfo(soldier* s, char* filename)
	{
		FILE* fp;
		int i;
		if (fp = fopen(filename, "r"))
		{
			for (i = 0; i < sol_num; i++)
			{
				fscanf(fp, "%s%d%s%d%f", (s + i)->name, &(s + i)->hp,
					(s + i)->wpn.wname, &(s + i)->wpn.bullet, &(s + i)->wpn.atk);
			}
			fclose(fp);
		}
		else
		{
			printf("�ǂݍ��݃G���[\n");
			return;
		}
	}
	void Display(soldier* s)
	{
		int i;
		for (i = 0; i < sol_num; i++)
		{
			printf("%s �̗�:%d\n", (s + i)->name, (s + i)->hp);
			printf("����:%s�@�e��:%d �U����:%.2f\n",
				(s + i)->wpn.wname, (s+i)->wpn.bullet, (s + i)->wpn.atk);
		}
	}