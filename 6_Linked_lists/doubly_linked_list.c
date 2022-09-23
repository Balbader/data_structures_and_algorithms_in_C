#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
	int	value;
	struct node *next;
	struct node *prev;
} Node;

void	print_list(Node *lst)
{
	Node	*current;
	char	name;

	if (!lst)
		return ;
	current = lst;
	name = 'a';
	while (current != NULL)
	{
		printf("Node[%c]: %d\n", name, current->value);
		current = current->next;
		name++;
	}
}

void	print_prev(Node *lst)
{
	Node	*current;
	char	name;

	if (!lst)
		return ;
	current = lst;
	name = 'c';
	if (current != NULL)
	{
		while (current->next != NULL)
			current = current->next;
	}
	while (current != NULL)
	{
		printf("Node[%c]: %d\n", name, current->value);
		current = current->prev;
		name--;
	}
}

int	main(void)
{
	Node	*a;
	Node	*b;
	Node	*c;

	a = (Node *)malloc(sizeof(Node));
	b = (Node *)malloc(sizeof(Node));
	c = (Node *)malloc(sizeof(Node));

	a->value = 10;
	b->value = 20;
	c->value = 30;

	a->next = b;
	b->next = c;
	c->next = NULL;

	c->prev = b;
	b->prev = a;
	a->prev = NULL;

	print_list(a);
	printf("\n");
	print_prev(c);
	return (0);
}
