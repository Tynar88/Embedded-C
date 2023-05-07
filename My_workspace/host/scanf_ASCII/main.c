/*
 * main.c
 *
 *  Created on: 30.04.2023
 *      Author: mathi
 */
#include <stdio.h>


void fun_LastConsole(void);

int main(void)
{
	char char0, char1, char2, char3, char4, char5;
	printf("Enter 6 single characters: ");
	scanf("%c %c %c %c %c %c",&char0, &char1, &char2, &char3, &char4, &char5);
	printf("1st character is: %c, the corresponding ASCII code is: %d\n",char0, char0);
	printf("2nd character is: %c, the corresponding ASCII code is: %d\n",char1, char1);
	printf("3rd character is: %c, the corresponding ASCII code is: %d\n",char2, char2);


	fun_LastConsole();
	return 0;
}

void fun_LastConsole(void)
{
	printf("\nPress key to exit!");
	while(getchar() != '\n') {}
	getchar();
}
