/*
 * main.c
 *
 *  Created on: 30.04.2023
 *      Author: mathi
 */
#include <stdio.h>
#include <stdint.h>

typedef struct {
	char 	data1;
	int 	data2;
	char 	data3;
	short 	data4;
	} DATASET_t;

void displayMemberElements_byPointer(DATASET_t *ptr);
void displayMemberElements_byData(DATASET_t data);

int main(void)
{
	DATASET_t data;

	data.data1 = 0x11;
	data.data2 = 0xFFFFEEEE;
	data.data3 = 0x22;
	data.data4 = 0xABCD;



	uint8_t *ptr = (uint8_t*)&data; // classic pointer
	DATASET_t *pData = &data; 		// pointer of struct

	//modify the 1st element
	pData->data1 = 0x55;

	//send pointer to function
	displayMemberElements_byPointer(&data);
	displayMemberElements_byData(data);


	uint32_t totalSize = sizeof(DATASET_t);

	printf("Memory address      Content\n");
	printf("===============================\n");
	for(uint32_t i = 0 ; i<totalSize ; i++)
	{
		printf("%p,         %X\n",ptr,*ptr);
		ptr++;
	}

	printf("Total memory consumed = %lu\n",sizeof(DATASET_t));

	getchar();
	return 0;
}

void displayMemberElements_byPointer(DATASET_t *pData)
{
	printf("data1 = %X\n",pData->data1);

}

void displayMemberElements_byData(DATASET_t data)
{
	printf("data2 = %X\n",data.data2);

}
