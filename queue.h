#pragma once
#define N 1
struct queue //î÷åðåäü
{
	char que[N];
	int quefirst, quelast;
};
void init_que(struct queue* q); //èíèöèàëèçàöèÿ î÷åðåäè
void push(struct queue* q, char x); //âñòàâêà â î÷åðåäü ýëåìåíòà
int is_empty(struct queue* q); //ïðîâåðêà î÷åðåäè
void print(struct queue* q); //âûâîä ýëåìåíòîâ
int pop(struct queue* q);//óäàëåíèå ýëåìåíòîâ


//сделать по тесту на делет итд
//структуру инициализировать 
