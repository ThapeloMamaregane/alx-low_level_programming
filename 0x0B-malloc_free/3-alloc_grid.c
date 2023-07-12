#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * alloc_grid - creates 2D array of ints
 * @width: width of 2D array
 * @height: height of 2D array
 * Return: pointer to 2D array or NULL if failure
 */
int **alloc_grid(int width, int height)
{
	int **arr;
	int a, b;

	if (width < 1 || height < 1)
		return (NULL);
	arr = malloc(sizeof(int *) * height);
	if (arr == NULL)
		return (NULL);
	for (a = 0; a < height; a++)
	{
		arr[a] = malloc(sizeof(int) * width);
		if (arr[a] == NULL)
		{
			for (--a; a >= 0; a--)
				free(arr[a]);
			free(arr);
			return (NULL);
		}
	}
	for (a = 0; a < height; a++)
		for (b = 0; b < width; b++)
			arr[a][b] = 0;
	return (arr);
}
