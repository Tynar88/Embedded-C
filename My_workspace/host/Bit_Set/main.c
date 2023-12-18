/*
 * main.c
 *
 *  Created on: 30.04.2023
 *      Author: mathi
 */
#include <stdio.h>
#include <math.h>
void fun_LastConsole(void);

int main(void)
{
	int32_t number;
	printf("Please enter a int number: ");
	scanf("%d",&number);
	printf("number = 0x%x\n",number);
	printf("clear Bit 4,5,6: number & ~(0x70) =  0x%x\n", (number & ~(0x70)));


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
