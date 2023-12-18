/*
 * main.c
 *
 *  Created on: 30.04.2023
 *      Author: mathi
 */
#include <stdio.h>
#include <math.h>
void fun_LastConsole(void);
void calculate_circle(void);

int main(void)
{
	char code;
	printf("Area calculation program\n");
	printf("Circle	  --> c\n");
	printf("Triangle  --> t\n");
	printf("Rectangle --> r\n");
	printf("Square    --> s\n");
	printf("Trapezoid --> z\n");
	printf("Enter the code here: ");
	code = getchar();
	//printf("%u %c",code,code);
	switch (code){
	case 'c':
		calculate_circle();
		break;
	default:
		printf("Code was not implemented yet.\n");
	}



	fun_LastConsole();
	return 0;
}

void fun_LastConsole(void){
	printf("\nPress key to exit!");
	while(getchar() != '\n') {}
	getchar();
}

void calculate_circle(void){
	float radius, area;
	printf("Enter a positive radius: ");
	scanf("%f",&radius);
	if (radius < 0) {
		printf("Radius can't be negativ!");
		area = -1;
	}else{
		area = M_PI * radius * radius;
		printf("The area of your circle is: %f\n",area);
	}

}
