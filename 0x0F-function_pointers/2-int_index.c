/**
 * int_index - function that searches for an integer
 * @array: array of elements
 * @size: number of elements
 * @cmp: pointer to the function
 * Return: 0  and -1 depending on the condition
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i, res;

	res = -1;
	if (array && cmp)
	{
		if (size <= 0)
			return (res);
		for (i = 0; i < size; i++)
		{
			cmp(array[i]);
			if (cmp(array[i]) > 0)
			{
				res = i;
				break;
			}
			if (cmp(array[i]) == (-1))
				return (res);
		}
	}
	return (res);
}
