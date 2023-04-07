#include <stdio.h>

/**
 * main - generate the password of crackme3 then write it to `101-password`
 */
int main(void)
{
	int i;
	FILE *fd;
	char code[5];

	/* generate the password */
	for (i = 0; i < 4; i++)
		code[i] = 0x46c6f48U >> ((i & 3) << 3) & 0xff;
	code[i] = 0;

	fd = fopen("101-password", "w");
	if (!fd)
	{
		perror("keygen");
		return (1);
	}

	fprintf(fd, "%s", code);
	fclose(fd);

	return (0);
}
