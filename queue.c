//очередь
#include "queue.h"
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


//инициализация очереди
void init_que(struct queue* q)
{
	q->quefirst = 1;
	q->quelast = 0;
	return;
}

//вставка в очередь элемента
int push(struct queue* q, char x)//int n
{
	if (q->quelast < SIZE)
	{
		q->quelast++;
		q->que[q->quelast] = x;
		return 0;
	}
	else
	{
		printf("queue is full\n");
		return 1;
	}
}

//проверка очереди
int is_empty(struct queue* q)
{
	if (q->quelast < q->quefirst)
		return 1;
	else  
		return 0;
}

//вывод элементов
int print(struct queue* q)
{
	int h;
	if (is_empty(q) == 1)
		return 1;
	for (h = q->quefirst; h <= q->quelast; h++)
		printf("%c ", q->que[h]);
	return 0;
}

//удаление элементов
int pop(struct queue* q,char* b, char x)
{
	if (is_empty(q) == 1)
		return 1;
	else
	{
		x = q->que[q->quefirst];
		*b = x;
		q->quefirst++;
	}
	return 0;
}

//проверяет на пробелы и энтеры и вводит символы в массив очереди
char check(struct queue* q)
{
	char b;
	int flag = 0;
	while(flag==0)
	{
		scanf("%c", &b);
		if (b == ' ' || b == '\n')
			flag = 0;
		else
			flag = 1;
	}
	if (isalpha(b) == 0)
	{
		printf("element %c is no a letter\n",b);
		return 1;
	}
	push(q, b);
	return 0;
}
