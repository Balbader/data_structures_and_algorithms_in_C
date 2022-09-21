#include <stdio.h>
#include <stdbool.h>

bool	binary_search(int *haystack, int needle, int haystack_size)
{
	int		lo;
	int		hi;
	int		value;
	int		mid_point;

	lo = 0;
	hi = haystack_size;
	do
	{
		mid_point = (int)(lo + (hi - lo) / 2);
		value = haystack[mid_point];

		if (value == needle)
			return (true);
		else if (value > needle)
			hi = mid_point;
		else
			lo = mid_point + 1;
	} while (lo < hi);
	return (false);
}

int	main(void)
{
	int	arr[] = {1, 2, 3, 4, 5, 6};
	int	size = sizeof(arr) / sizeof(arr[0]);
	printf("%d\n", binary_search(arr, 4, size));
}
