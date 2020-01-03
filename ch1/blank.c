#include <stdio.h>

main()
{
	int c, pc;

	pc = EOF;

	while( (c = getchar()) != EOF)
	{
		if ( c == ' ')
		{
			if (pc != ' ')
				putchar(c);
		}
		else
			putchar(c);
		pc = c;
	}
}
