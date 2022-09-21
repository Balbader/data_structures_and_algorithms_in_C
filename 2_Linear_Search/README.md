# Linear Search

Linear search is a sequential searching algorithm where we start from one end
and check every element of the list until the desired element is found.
It is the simplest searching algorithm.

In the following example:

```c
#include <stdio.h>
#include <stdbool.h>

bool	linear_search(int *haystack, int needle, int haystack_size)
{
	int	i;

	i = 0;
	while (i < haystack_size)
	{
		if (haystack[i] == needle)
			return (true);
		i++;
	}
	return (false);
}
```
we compare each element with the element to search until we find it or the list ends.
