#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - prints buffer in hexa
 * @width: integer input
 * @height: integer input
 * Return: pointer to an integer input
 */

int **alloc_grid(int width, int height)
{
  int i, j;
  int *ptr = NULL;

  if (width <= 0 || height <= 0)
    return (NULL);

  ptr = (int *)malloc(width * height * sizeof(int));

  for (i = 0; i < width * height; i++)
    {
    }

  return (ptr);
}