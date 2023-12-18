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
