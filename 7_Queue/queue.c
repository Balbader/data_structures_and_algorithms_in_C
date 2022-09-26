#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

typedef struct node
{
	int			value;
	struct node *next;
} node;

typedef struct
{
	node *head;
	node *tail;
} queue;

void	init_queue(queue *q)
{
	q->head = NULL;
	q->tail = NULL;
}

bool	enque (queue *q, int value)
{
	// Create new node
	node *new_node = (node *)malloc(sizeof(node) * 1);

	if (new_node == NULL)
		return (false);
	new_node->value = value;
	new_node->next = NULL;

	// if there is a tail, connect that tail to this new node
	if (q->tail != NULL)
		q->tail->next = new_node;
	q->tail = new_node;

	// make sure that the head makes sense
	if (q->head == NULL)
		q->head = new_node;
	return (true);
}

int	dequeue(queue *q)
{
	// check if q is empty
	if (q->head == NULL)
		return (0);

	// save the head of the queue
	node *tmp = q->head;

	// save the resutle we're going	to return
	int result = tmp->value;

	// take it off
	q->head = q->head->next;
	if (q->head == NULL)
		q->tail = NULL;
	free(tmp);
	return (result);
}
