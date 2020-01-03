#include <stdio.h>

/* print Celsius-Fahrenheit table */

main ()
{
	float fahr, cel;
	int lower, upper, step;

	lower = 0;
	upper = 100;
	step = 10;

	cel = lower;

	printf("Celsius  Fahrenheit\n");
	printf("===================\n");

	while(cel <= upper) {
		fahr = ((9.0/5.0) * cel) + 32.0;
		printf("%5.0f %10.1f\n", cel, fahr);
		cel = cel + step;
	}
}
