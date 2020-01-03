#include <stdio.h>

main()
{
	int c, wc, cl;


	wc = cl = 0;
	while (( c = getchar() ) != EOF)
	{
		++cl;

		if( c == ' ' || c == '\t' || c == '\n')
		{
			--cl;
			printf("%3d|", wc);
			++wc;
			for (int i = 0; i < cl; ++i)
				printf("=");
			printf("\n");
			cl = 0;
			if( c == '\n')
				wc = 0;
			
		}
	}
}


