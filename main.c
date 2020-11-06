//очередь реализация получения/удаления элемента
#define _CRT_SECURE_NO_WARNINGS
#include "queue.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void main()
{
	int i = 0, n = 0;
	char l;
	struct queue* q;
	q = malloc(sizeof(struct queue));
	init_que(q);
	check(q);
	print(q);
	printf("\n");
	check(q);
	print(q);
	printf("\n");
	check(q);
	print(q);
	printf("\n");
	check(q);
	print(q);
	printf("\n");
	{
		for (int i = 0; i < 3; i++)
		{
			if (pop(q, &l) == 0) 
			{
				printf("\ndelet element %c\n", l);
			}
			else
				printf("queue is empty\n");
			print(q);
		}
		//system("pause");
	}

	system("pause");
	free(q);
	return 0;
}
