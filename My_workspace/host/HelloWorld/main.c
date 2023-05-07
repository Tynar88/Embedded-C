/*
 * main.c
 *
 *  Created on: 21.03.2023
 *      Author: mathi
 */

#include <stdio.h>

int main(void)
{
	/*
	 * multi line comment
	 *
	 */
	// single line comment
	printf("David says , \"Programming is fun !\"\n");
	printf("**Conditions apply, \"Offers valid until tomorrow\"\n");
	printf("C:\\My Computer\\My folder\n");
	printf("D:/My documents/My file\n");
	printf("\\\\\\\\Today is holiday\\\\\\\\\n");
	printf("This is a triple quoted string\"\"\"This month has 30 days\"\"\"\n");
	printf("sizeof char   = %d Byte\n",(int)sizeof(char));
	printf("sizeof int = %d Byte\n",(int)sizeof(int));
	printf("sizeof double = %d Byte\n",(int)sizeof(double));

	unsigned int data1 = 160;
	unsigned int data2 = 40;
	unsigned int sum = data1+data2;
	printf("Distance A2B is: %d\n",sum);

	printf("\nPress 'Enter' to exit this application\n");
	getchar();
	return 0;
	}
