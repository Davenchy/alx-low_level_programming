#include <stdlib.h>
#include <string.h>

#define WORD_S 3
#define WORDS_S 3

#define CS sizeof(char)
#define CPS sizeof(char *)

/**
 * strtow - split words in @str into words list
 * @str: the reference to the string
 * Return: pointer to list of words otherwise NULL
 */
char **strtow(char *str)
{
	char **words;
	int wsi = 0, wi = 0, ws = WORD_S;

	words = calloc(2, CPS);
	words[0] = calloc(WORD_S, CS);
	for (; *str; str++)
	{
		if (*str == 32)
		{
			if (!wi)
				continue;
			words[wsi] = realloc(words[wsi], wi + 1);
			words[++wsi] = calloc(WORD_S, CS);
			words = realloc(words, CPS * (2 + wsi));
			memset(words + wsi + 1, 0, CPS);
			wi = 0, ws = WORD_S;
		}
		else
		{
			if (wi < ws)
				ws += WORD_S, words[wsi] = realloc(words[wsi], ws);
			words[wsi][wi++] = *str;
		}
	}
	return (words);
}
