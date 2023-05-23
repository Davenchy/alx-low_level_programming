#include <unistd.h>

int puts(char *str)
{
	write(1, "Congratulations, you win the Jackpot!\n", 38);
	return (0);
}
