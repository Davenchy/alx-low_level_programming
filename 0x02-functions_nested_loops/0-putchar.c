#include "main.h"

int main(void) {
	int i;
	char *msg = "_putchar";

	for (i = 0; i < 8; i++)
		_putchar(msg[i]);
	
	_putchar('\n');
	return (0);
}
