#include <stdio.h>

void	bubble_sort(int *arr, int arr_size)
{
	int	i;
	int	j;
	int	temp;

	temp = 0;
	i = 0;
	while (i < arr_size - 1)
	{
		j = 0;
		while (j < arr_size - i - 1)
		{
			if (arr[j] > arr[j + 1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
			j++;
		}
		i++;
	}
}

int	main(void)
{
	int	arr[] = {3, 2, 5, 4, 1};
	int arr_size = 5;
	int	i = 0;

	printf("Before Bubble Sort:\n");
	while (i < arr_size)
	{
		printf("%d ", arr[i]);
		i++;
	}
	printf("\n");

	bubble_sort(arr, arr_size);

	printf("After Bubble Sort:\n");
	i = 0;
	while (i < arr_size)
	{
		printf("%d ", arr[i]);
		i++;
	}

	return (0);
}
