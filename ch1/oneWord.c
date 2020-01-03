#include <stdio.h>

#define IN 1
#define OUT 0

main()
{
	int c, nl, state;

	state = OUT;
	nl = 0;
	while (( c = getchar() ) != EOF)
	{
		if(c == ' ' || c == '\n' || c == '\t') 
			state = OUT;
		else if (state == OUT)
		{
			state = IN;
			printf("\n");
		}
		putchar(c);
	}
}
