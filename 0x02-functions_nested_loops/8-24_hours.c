#include "main.h"
#include <stdio.h>

/**
 * jack_bauer - prints every minute of the day
 * Return: 0
 */
void jack_bauer(void)
{
	int hour = 0;

	while (hour < 24)
	{
		int minute = 0;

		while (minute < 60)
		{
			printf("%02d:%02d", hour, minute);
			minute += 2;
		}
		hour++;
	}
}
