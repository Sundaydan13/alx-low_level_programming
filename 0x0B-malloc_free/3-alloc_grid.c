#include "main.h"
		
#include <stdlib.h>
		
/**
		
 * alloc_grid - grid nested loop
		
 * @width: width input
		
 * @height: height input
		
 * Return: pointer to 2 dim. array
		
 */
		
int **alloc_grid(int width, int height)
		
{
		
	int **jj;
		
	int x, y;
		

		
	if (width <= 0 || height <= 0)
		
		return (NULL);
		

		
	jj = malloc(sizeof(int *) * height);
		

		
	if (jj == NULL)
		
		return (NULL);
		

		
	for (x = 0; x < height; x++)
		
	{
		
		jj[x] = malloc(sizeof(int) * width);
		

		
		if (jj[x] == NULL)
		
		{
		
			for (; x >= 0; x--)
		
				free(jj[x]);
		

		
			free(jj);
		
			return (NULL);
		
		}
		
	}
		

		
	for (x = 0; x < height; x++)
		
	{
		
		for (y = 0; y < width; y++)
		
			jj[x][y] = 0;
		
	}
		

		
	return (jj);
		
}
