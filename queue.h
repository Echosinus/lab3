#ifndef protect
#define SIZE 1
//очередь
struct queue
{
	char que[SIZE];
	int quefirst, quelast;
};

//инициализация очереди
void init_que(struct queue* q);

//вставка в очередь элемента
int push(struct queue* q, char x); 

//проверка очереди
int is_empty(struct queue* q);

//вывод элементов
int print(struct queue* q); 

//удаление элементов
int pop(struct queue* q);

//проверяет на пробелы и энтеры и вводит их в массив очереди
char check(struct queue* q);
#endif
