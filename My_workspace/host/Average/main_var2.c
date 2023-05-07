/*
 * main.c
 *
 *  Created on: 30.04.2023
 *      Author: mathi
 */
#include <stdio.h>


float fun_AverageOfThreeFloat(float a, float b, float c);
void fun_LastConsole(void);

int main(void)
{
	float number1, number2, number3;
	float average;

	printf("Enter three numbers: "); fflush(stdout);
	scanf("%f %f %f", &number1, &number2, &number3);

//	printf("Enter the 2nd number: "); fflush(stdout);
//	scanf("%f",&number2);
//	printf("Enter the 3rd number: "); fflush(stdout);
//	scanf("%f",&number3);

	average = fun_AverageOfThreeFloat(number1,number2,number3);
	printf("The average value is: %0.2f\n",average);

	fun_LastConsole();
	return 0;
}

float fun_AverageOfThreeFloat(float a, float b, float c)
{
	return (a+b+c)/3.0;

}

void fun_LastConsole(void)
{
	printf("Press key to exit!");
	while(getchar() != '\n') {}
	getchar();
}
