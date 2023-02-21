#include "main.h"

void print_int(int n)
{
  int a, b;

  b = n % 10;
  a = n / 10;

  _putchar(a + 48);
  _putchar(b + 48);
}

/**
 * jack_bauer - print every minute of the day
 * Return: void
 */
void jack_bauer(void)
{
	int i;

	for (i = 0; i < 1440; i++)
	{
		int m, h;
		
		h = i / 60;
		m = i % 60;

    print_int(h);
    _putchar(':');
    print_int(m);
    _putchar('\n');
	}
}
