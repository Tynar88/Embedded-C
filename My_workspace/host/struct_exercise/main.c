/*
 * main.c
 *
 *  Created on: 30.04.2023
 *      Author: mathi
 */
#include <stdio.h>
#include <stdint.h>

typedef struct
{
	uint8_t addr_mode;
	uint8_t short_addr;
	uint8_t long_addr;
	uint8_t sensor;
	uint8_t bat;
	uint16_t payload;
	uint8_t status;
	uint8_t crc;
} PACKET_t;

int main(void)
{
	uint32_t packet_value;
	printf("Enter the 32bit packet value: 0x");
	scanf("%X",&packet_value);
	printf("The 32bit packet value is: 0x%X\n\n\n",packet_value);

	PACKET_t packet_struct;
	PACKET_t *pPacket_struct = &packet_struct; 		// pointer of struct

	uint8_t temp = packet_value >> 31;
	temp = (packet_value >> 31) && 0x1;

	temp = packet_value >> 29;
	temp = (packet_value >> 29) && 0x3;

	pPacket_struct->addr_mode = (packet_value >> 31) && 0x1;
	pPacket_struct->short_addr = (packet_value >> 29) && 0x3;
	pPacket_struct->long_addr = (packet_value >> 21) && 0xFF;
	pPacket_struct->sensor = (packet_value >> 18) && 0x7;

	printf("Value of addr_mode is: 0x%X\n",pPacket_struct->addr_mode);
	printf("Value of short_addr is: 0x%X\n",pPacket_struct->short_addr);
	printf("Value of long_addr is: 0x%X\n",pPacket_struct->long_addr);
	printf("Value of sensor is: 0x%X\n",pPacket_struct->sensor);


	getchar();getchar();
	return 0;
}

