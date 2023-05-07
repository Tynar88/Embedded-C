/*
 * main.c
 *
 *  Created on: 04.04.2023
 *      Author: mathi
 */
#include <stdio.h>
int fun_add_numbers(int a, int b, int c);


int main(void)
{
	int retValue;
	fun_add_numbers(12,13,14);
	retValue = fun_add_numbers(-12,3,14);

	printf("retValue = %d\n",retValue);

	printf("\nPress 'Enter' to exit this application\n");
	getchar();
	return 0;
}


int fun_add_numbers(int a, int b, int c)
{
	int sum;
	sum = a+b+c;
	printf("Sum = %d\n",sum);
	return sum;
}
