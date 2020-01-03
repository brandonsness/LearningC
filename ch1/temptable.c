#include <stdio.h>

/* print Farhenheit-Celsius table
 * for fahr = 0, 20, ..., 300 */

main()
{
	float fahr, celsius;
	int lower, upper, step;

	lower = 0; /* lower limit of temperature table */
	upper = 300; /* upper limit */
	step = 20; /* step size */

	fahr = lower;
	printf("Farhenheit  Celsius\n");
	printf("===================\n");	
	while (fahr <= upper) {
		celsius = (5.0/9.0) * (fahr-32.0);
		printf("%6.0f %11.1f\n", fahr, celsius);
		fahr = fahr + step;
	}
}
