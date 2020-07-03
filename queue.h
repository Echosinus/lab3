#pragma once
#define N 1
struct queue //очередь
{
	char que[N];
	int quefirst, quelast;
};
void init_que(struct queue* q); //инициализация очереди
void push(struct queue* q, char x); //вставка в очередь элемента
int is_empty(struct queue* q); //проверка очереди
void print(struct queue* q); //вывод элементов
int pop(struct queue* q);//удаление элементов