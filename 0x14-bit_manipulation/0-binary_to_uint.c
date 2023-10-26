#include "main.h"

/**
 * binary_to_uint - is a function that converts binary to integer
 * @b - is a pointer to a character.
 * Returns 
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int i = 0;

	if (b == NULL)
		return (0);

	while(b[i] != '\0')
	{
		if(b[i] == '0' || b[i] == '1')
		{
		
			result <<= 1;

	
			result |= (b[i] - '0');

			i++;

		}
		else
		{

			return (0);
		}
	};

	return (result);
}
