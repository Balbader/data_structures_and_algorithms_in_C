#include <stdio.h>
#include <stdlib.h>

typedef struct s_list
{
	int				value;
	struct s_list	*next;
}				t_list;

int	main(void)
{

	t_list	*head;
	t_list	*a;
	t_list	*b;
	t_list	*c;

	a = (t_list *)malloc(sizeof(t_list) * 1);
	b = (t_list *)malloc(sizeof(t_list) * 1);
	c = (t_list *)malloc(sizeof(t_list) * 1);

	a->value = 1;
	b->value = 2;
	c->value = 3;

	a->next = b;
	b->next = c;
	c->next = a;

	/* Save address of c node in head */
	head = a;
	return (0);
}
