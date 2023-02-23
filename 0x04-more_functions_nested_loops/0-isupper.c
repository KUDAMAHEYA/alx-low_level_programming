#include "main.h"

/**
  * _isupper - To check uppercase letters
  * @b: charector to be examined
  *
  * Return: 1 or 0
  */

int _isupper(int b)
{
	if (b >= 'A' && b <= 'Z')
	{
		return (1);
	}

	return (0);
}

