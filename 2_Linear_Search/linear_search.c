#include <stdio.h>
#include <stdbool.h>

bool	linear_search(int *haystack, int needle, int arr_size)
{
	int	i;

	i = 0;
	while (i < arr_size)
	{
		if (haystack[i] == needle)
			return (true);
		i++;
	}
	return (false);
}

int main(void)
{
	int	arr[] = {1, 2, 3, 4, 5, 6};
	int	needle = 8;

	printf("%d\n", linear_search(arr, needle, 6));
	return (0);
}
