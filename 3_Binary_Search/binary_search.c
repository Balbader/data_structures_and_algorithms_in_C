#include <stdio.h>
#include <stdbool.h>

bool	binary_search(int *haystack, int needle, int lo, int hi, int haystack_size)
{
	int	mid_point;
	int	value;

	lo = 0;
	hi = haystack_size;
	while (lo < hi)
	{
		mid_point = (lo + (hi - lo) / 2);
		value = haystack[mid_point];

		if (value == needle)
			return (true);
		else if (value > needle)
			hi = mid_point;
		else
			lo = mid_point + 1;
		lo++;
	}
	return (false);
}
