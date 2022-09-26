#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	queue[256];
int	count = 0;

void	insert_into_queue(int x)
{
	queue[count] = x;
	count++;
}

int	main(void)
{
	insert_into_queue(1);
	insert_into_queue(2);
	insert_into_queue(3);
	insert_into_queue(4);
	insert_into_queue(5);

	int	i;
	for (i = 0; i < count; i++) {
		printf("%d ", queue[i]);
	}
	return (0);
}
