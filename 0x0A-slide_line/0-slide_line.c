#include <stdlib.h>
#include <stdio.h>

#include "slide_line.h"
/**
* slide_line - function
* @line: array of integers
* @size: size of array
* @direction: slides
* Return: 1 Success 0 Failure
*/

int slide_line(int *line, size_t size, int direction)
{
	int temp = line[0];
	unsigned int i;

	if (direction == SLIDE_LEFT)
	{
		for (i = 0; i < size - 1; i++)
			line[i] = line[i + 1];
	}

	if (direction == SLIDE_RIGHT)
	{
		temp = line[size - 1];
		for (i = size - 1; i > 0; i--)
			line[i] = line[i - 1];
		line[0] = temp;
	}
	return (1);
}
