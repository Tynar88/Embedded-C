

#include <stdio.h>
#include <stdint.h>

typedef struct
{
	uint32_t addr_mode	:1;
	uint32_t short_addr	:2;
	uint32_t long_addr	:8;
	uint32_t sensor		:3;
	uint32_t bat		:3;
	uint32_t payload	:12;
	uint32_t status		:1;
	uint32_t crc		:2;
} PACKET_t;

int main(void)
{
	uint32_t packet_value;
	printf("Enter the 32bit packet value: 0x");
	//scanf("%X",&packet_value);
	packet_value = (uint32_t)0x03FF1234;
	printf("%lX\n\n\n",packet_value);
	printf("The 32bit packet value is: 0x%lX\n\n\n",packet_value);

	PACKET_t packet_struct;
	PACKET_t *pPacket_struct = &packet_struct; 		// pointer of struct


	// (xxx >> No.) | No = Sum of all previous lengths
	pPacket_struct->addr_mode = (packet_value >> (32-1)) & 0x1; // Length 1 Bit
	pPacket_struct->short_addr = (packet_value >> (31-2)) & 0x3; // Length 2 Bit
	pPacket_struct->long_addr = (packet_value >> (29-8)) & 0xFF; // Length 8 Bit
	pPacket_struct->sensor = (packet_value >> (21-3)) & 0x7; // Length 3 Bit

	pPacket_struct->bat = (packet_value >> (18-3)) & 0x7; // Length 3 Bit
	pPacket_struct->payload = (packet_value >> (15-12)) & 0xFFF; // Length 12 Bit
	pPacket_struct->status = (packet_value >> (3-1)) & 0x1; // Length 1 Bit
	pPacket_struct->crc = (packet_value >> (2-2)) & 0x3; // Length 2 Bit

	printf("Value of addr_mode is:  0x%X\n",pPacket_struct->addr_mode);
	printf("Value of short_addr is: 0x%X\n",pPacket_struct->short_addr);
	printf("Value of long_addr is:  0x%X\n",pPacket_struct->long_addr);
	printf("Value of sensor is:     0x%X\n",pPacket_struct->sensor);
	printf("Value of bat is: 		0x%X\n",pPacket_struct->bat);
	printf("Value of payload is: 	0x%X\n",pPacket_struct->payload);
	printf("Value of status is: 	0x%X\n",pPacket_struct->status);
	printf("Value of crc is: 		0x%X\n",pPacket_struct->crc);

	getchar();getchar();
	return 0;
}

