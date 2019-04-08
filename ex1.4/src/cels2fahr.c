#include <stdio.h>

/* печать таблицы температур по Фаренгейту и Цельсию */

main() {
	float fahr, celsius;
	int lower, upper, step;

	lower = -20;		/* нижняя граница табл. температур */
	upper = 160;	/* верхняя граница */
	step = 20;		/* шаг */

	printf("Temperature\nC\tF\n");
	celsius = lower;
	while (celsius <= upper) {
		fahr = (9.0/5.0) * (celsius + 32.0);
		printf("%3.0f %6.1f\n", celsius, fahr);
		celsius = celsius + step;
	}
}
