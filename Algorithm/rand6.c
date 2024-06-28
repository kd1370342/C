#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int pl, cpu;
	srand(time(0));
	printf("何を出しますか?\n(1:グー2:チョキ3:パー)>");
	scanf("%d", &pl);
	if (pl == 1) {
		printf("プレイヤーはグーです\n");
	}
	else {
		if (pl == 2) {
			printf("プレイヤーはチョキです\n");
		}
		else {
			if (pl == 3) {
				printf("プレイヤーはパーです\n");
			}
		}
	}
	cpu = rand() % 3 + 1;
	if (cpu == 1) {
		printf("コンピューターはグーです\n");
	}
	else {
		if (cpu == 2) {
			printf("コンピューターはチョキです\n");
		}
		else {
			if (cpu == 3) {
				printf("コンピューターはパーです\n");
			}
		}
	}
	if (pl == cpu) {
		printf("あいこです\n");
	}
	else {
		if ((pl==1&&cpu==2)
		    || (pl==2&&cpu==3)
		    || (pl==3&&cpu==1)){
			printf("プレイヤーの勝ちです\n");
		}
		else {
			if ((pl==1&& cpu==3)
				||(pl==2&&cpu==1)
				||(pl==3&&cpu==2)) {
				printf("プレイヤーの負けです\n");
			}
		}
	}
}