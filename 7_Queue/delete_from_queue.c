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

int	delete_from_queue()
{
	int res = queue[0];
	int	i;

	if (count == 0) {
		fprintf(stderr, "No elements to delete.\n");
		return -1;
	}

	for (i = 0; i < count - 1; i++) {
		queue[i] = queue[i + 1];
	}
	count--;
	return (res);
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

	printf("\n");

	for (i = 0; i < 4; i++) {
		printf("%d ", delete_from_queue());
	}

	printf("\n");
	printf("queue[0]: %d\n", queue[0]);

	for (i = 0; i < count; i++) {
		printf("%d ", queue[i]); // will print nothing as we removed all elements
	}
	return (0);
}
