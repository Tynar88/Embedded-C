#include <stdio.h>

#include "math.h"

int main(void)
{
	printf("Add: %d\n",math_add(2,3));
	printf("Sub: %d\n",math_sub(2,3));
	printf("Mul: %llu\n",math_mul(2,3));
	printf("Div: %f\n",math_div(2,3));

	printf("\nPress 'Enter' to exit this application\n");
	getchar();
	return 0;
}


