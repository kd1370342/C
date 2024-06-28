#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int date[20], i, work, target;
	for (i = 0; i < 20; i++) {
		date[i] = i + 1;
		printf("date[%d]=%d\n",i, date[i]);
	}
	printf("\n");
	srand(time(0));
	for (i = 0; i < 20; i++) {
		target = rand() % 20+1;

		work = date[i];
		date[i] = target;
		target = work;
		printf("date[%d]=%d\n", i, date[i]);
	}
}