#define _CRT_SECURE_NO_WARNINGS
#include "queue.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
struct queue; //очередь
void main()
{
	char sym[N];
	int i = 0;
	int flag1 = 0, flag2 = 0;
	char a;
	struct queue* q;
	q = malloc(sizeof(struct queue));
	init_que(q);
	printf("enetry element's\n");
	while (i < N)
	{
		scanf("%c", &a);
		if (a == ' ')
		{
			flag1 = 1;
		}
		if (a == '\n')
		{
			flag2 = 1;
		}
		if (flag1 == 0)
		{
			if (flag2 == 0)
			{
				sym[i] = a;
				i++;
			}
		}
		flag1 = 0;
		flag2 = 0;
	}
	for (i = 0; i < N; i++)
	{
		push(q, sym[i]);
	}
	print(q);
	while (q->quefirst != N + 1)
	{
		a = pop(q);
		printf("delet element %d\n", a);
		print(q);
	}
	system("pause");
}