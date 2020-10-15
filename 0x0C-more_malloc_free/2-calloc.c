#include <stdlib.h>

/**
 * *_calloc - allocates memory for an array, using malloc
 * @nmemb: array length
 * @size: size of each element
 * Return: pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
int **m;
unsigned int i;

if (size == 0 || nmemb == 0)
	return (NULL);

m = malloc(nmemb);

if (m == 0)
	return (NULL);

for (i = 0; i < nmemb; i++)
{
	m[i] = malloc(size);
	if (m[i] == 0)
		return (NULL);
	
	*m[i] = 0;
	/*for (j = 0; j < size; j++)
		m[i][j] = 0;*/
}

return (m);
}
