#include "main.h"

/**
 * jack_bauer - this function Prints every minute of the day of
 *              Jack Bauer, starting from 00:00 to 23:59.
 */
void jack_bauer(void)
{
	int hour;
	int second;

	for (hour = 0; hour <= 23; hour++)
	{
		for (second = 0; second <= 59; second++)
		{
			_putchar((hour / 10) + '0');
			_putchar((hour % 10) + '0');
			_putchar(':');
			_putchar((second / 10) + '0');
			_putchar((second % 10) + '0');
			_putchar('\n');
		}
	}
}
