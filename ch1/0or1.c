#include <stdio.h>

main()
{
	int c;
	int ver;

	while ((ver = ((c = getchar()) != EOF))) {
		printf("%d", ver);
	}
	printf("%d", ver);
}


