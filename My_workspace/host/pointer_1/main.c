/*
 * main.c
 *
 *  Created on: 30.04.2023
 *      Author: mathi
 */
#include <stdio.h>
void fun_LastConsole(void);

long long int g_data = 0xFFFEABCD11112345;

int main(void)
{
	char *pAddress1 = (char*)&g_data;
	printf("Value at address %p is: %x\n",pAddress1,*pAddress1);

	int *pAddress2 = (int*)&g_data;
	printf("Value at address %p is: %x\n",pAddress2,*pAddress2);

	long long int *pAddress3 = (long long int*)&g_data;
	printf("Value at address %p is: %llx\n",pAddress3,*pAddress3);
//	fun_LastConsole();
	return 0;
}

void fun_LastConsole(void)
{
	printf("\nPress key to exit!");
	while(getchar() != '\n') {}
	getchar();
}
