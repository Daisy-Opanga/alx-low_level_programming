#include "main.h"

/**
 *_isupper -checks if a characer is in uppercase
 *@c - character to be checked
 *return:1 for uppercase and 0 for other
*/

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
