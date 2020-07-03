#include "queue.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void init_que(struct queue* q) //инициализация очереди
{
	q->quefirst = 1;
	q->quelast = 0;
	return;
}
void push(struct queue* q, char x) //вставка в очередь элемента
{
	if (q->quelast <= N)
	{
		q->quelast++;
		q->que[q->quelast] = x;
	}
	else
		printf("queue is empty\n");
	return;
}
int is_empty(struct queue* q) //проверка очереди
{
	if (q->quelast < q->quefirst)
		return 1;
	else  return 0;
}
void print(struct queue* q) //вывод элементов
{
	int h;
	if (is_empty(q) == 1)
	{
		printf("queue is empty\n");
		return;
	}
	for (h = q->quefirst; h <= q->quelast; h++)
		printf("%c ", q->que[h]);
	return;
}
int pop(struct queue* q)//удаление элементов
{
	char x;
	if (is_empty(q) == 1) {
		printf("queue is empty\n");
		return 0;
	}
	x = q->que[q->quefirst];
	q->quefirst++;
	return x;
}