#include <stdio.h>

main()
{
	int c, b, t, n1;

	b = 0;
	t = 0;
	n1 = 0;
	while ((c = getchar()) != EOF) {
		if( c == '\n')
			++n1;
		else if( c == ' ')
			++b;
		else if( c == '\t')
			++t;
	}
	printf("Number of newlines: %d\n", n1);
	printf("Number of blankes: %d\n", b);
	printf("Number of tabs: %d\n", t);
}
