#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 256
int	queue[SIZE];
int	count = 0;

void	enqueue(int x)
{
	queue[count] = x;
	count++;
}

int	main(void)
{
	enqueue(1);
	enqueue(2);
	enqueue(3);
	enqueue(4);
	enqueue(5);

	int	i;
	for (i = 0; i < count; i++) {
		printf("%d ", queue[i]);
	}
	return (0);
}
