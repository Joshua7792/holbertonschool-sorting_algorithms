#include "sort.h"

void _swap(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;

}


int _split(int *arr, int min, int last, size_t size)
{
	int piv;
	int i = (min);
	int j;

	piv = arr[last];
	for (j = min; j < last; j++)
	{
		if (arr[j] <= piv)
		{

			_swap(&arr[i], &arr[j]);


			if (i != j)
				print_array(arr, size);

			i++;

		}
	}

	_swap(&arr[i], &arr[last]);
	if (i != j)
		print_array(arr, size);

	return (i);
}


void quick_sort_array(int *arr, int min, int last, size_t size)
{

	int piv;

	if (min < last)
	{
		piv = _split(arr, min, last, size);
		quick_sort_array(arr, min, (piv - 1), size);
		quick_sort_array(arr, (piv + 1), last, size);
	}
}

void quick_sort(int *array, size_t size)
{
	if (size < 2)
		return;

	quick_sort_array(array, 0, size - 1, size);
}
