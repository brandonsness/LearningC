#include <stdio.h>

#define ARRAY_LEN 62

main()
{
	int c;
	int nchar[ARRAY_LEN]; /* supporting 0-9 a-z, A-Z */

	/* not a good solution I think lol, but makes the chart easier */
	char buf[ARRAY_LEN] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";

	for (int i = 0; i < ARRAY_LEN; ++i)			
		nchar[i] = 0;

	while(( c = getchar() ) != EOF)
	{
		if ( c >= '0' && c <= '9')
			++nchar[c-'0'];
		else if ( c >= 'A' && c <= 'Z')
			++nchar[c-'A'+10];
		else if ( c >= 'a' && c <= 'z')
			++nchar[c-'a'+36];
	}
	
	for (int i = 0; i < ARRAY_LEN; ++i)
	{
		printf("%2c|", buf[i]);

		for( int j = 0; j < nchar[i]; ++j)
			printf("=");
		printf("\n");
	}		
}
