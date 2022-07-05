#include "main.h"
/**
 * jack_bauerr - print eveeg hour and minutes of jack bauer
 * Return: return 0 if successful 1 if otherwise
 */

void jack_bauer(void)
{
	int hour = 00;
	int minutes;

	while (hour <= 24)
	{
		putchar(hour);
		minutes = 00;
		while (minutes <= 60)
		{
			_putchar(':');
			_putchar(minutes);
			minutes++;
		}
		putchar('\n');
		hour++;
	}
	return (0);
}
