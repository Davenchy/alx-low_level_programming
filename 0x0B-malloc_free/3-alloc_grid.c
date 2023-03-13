#include <stdlib.h>

/**
 * alloc_grid - allocate 2d array
 * @width: the array width
 * @height: the array height
 * Return: pointer to list of pointers to int[] else NULL on fail
 */
int **alloc_grid(int width, int height)
{
	int i, failed = -1;
	int **nums;

	if (width <= 0 || height <= 0)
		return (NULL);

	/* allocate array of pointer to int[] */
	nums = calloc(height, sizeof(int *));
	if (!nums)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		/* allocate pointer to int[] */
		nums[i] = calloc(width, sizeof(int));
		/* break on fail and set failed to last index */
		if (!nums[i])
		{
			failed = i - 1;
			break;
		}
	}

	/* free memory on fail */
	if (failed > -1)
	{
		/* free allocated int[] */
		for (i = failed; i >= 0; i--)
			free(nums[i]);
		free(nums);
		return (NULL);
	}

	return (nums);
}
