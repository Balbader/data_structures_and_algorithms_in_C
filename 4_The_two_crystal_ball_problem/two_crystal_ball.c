#include <stdio.h>
#include <math.h>

int	two_crystal_balls(int *arr, int arr_size)
{
	int	jump_length;
	int	i;
	int	j;

	jump_length = floor(sqrt(arr_size));
	i = 0;
	while (i < arr_size)
	{
		if (arr[i])
			break;
		i += jump_length;
	}
	i -= jump_length;
	j = 0;
	while (j < jump_length && i < arr_size)
	{
		if (arr[i])
			return (i);
		j++;
		i++;
	}
	return -1;
}
