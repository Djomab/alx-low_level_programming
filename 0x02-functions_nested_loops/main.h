#ifndef MAIN_H
#define MAIN_H

/* _putchar.c */
int _putchar(char);
void print_alphabet(void)
{
	char c;

	for(c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}

	_putchar('\n');
}

#endif
