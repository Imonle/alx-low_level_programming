#include "main.h"
#include <stdio.h>

/**
 * reset_to_98 - Reset value to 98 using a pointer
 * @*n: Value to be updated
 */
void reset_to_98(int *n)
{
	int n;
	int *p;

	n = 402;
	*p = &n;

	printf("n=%d\n", n);
	printf("&n=%p\n", *p);
	printf("*p=%p\n", &n);

	*p = 98;

	printf("n=%d\n", n);
}
