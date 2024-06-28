#include<stdio.h>
#define Mapnum 3
#define W 10
#define H 5

typedef struct
{
	int m_map[H][W];

}Map;

void SetMap(char* filename, Map* m);
void DrawMap(Map m);

main()
{
	Map Mapdata;
	char* Mapfilename[Mapnum] = { "map0.txt","map1.txt","map2.txt" };
	int select;
	printf("表示するマップ(0,1,2)>");
	scanf("%d", &select);
	SetMap(Mapfilename[select], &Mapdata);
	DrawMap(Mapdata);
}
void SetMap(char* filename, Map* m)
{
	FILE* fp;
	int i, g;
	char ch;
	if (fp = fopen(filename, "r"))
	{
		for (i = 0; i < H; i++)
		{
			for (g = 0; g < W; g++)
			{
				ch = fgetc(fp);
				m->m_map[i][g] = ch - '0';

			}
			fgetc(fp);
		}
		fclose(fp);
	}
}
void DrawMap(Map m)
{
	int i, j;
	for (i = 0; i < H; i++)
	{
		for (j = 0; j < W; j++)
		{
			if (m.m_map[i][j] == 1)
			{
				printf("■");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
}
