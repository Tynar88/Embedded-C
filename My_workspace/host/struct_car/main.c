/*
 * main.c
 *
 *  Created on: 30.04.2023
 *      Author: mathi
 */
#include <stdio.h>

struct carModel {
		unsigned int carNumber;
		uint32_t carPrice;
		uint16_t carMaxSpeed;
		float carWeight;
	};


int main(void)
{
	struct carModel CarBMW = {2021,15000,220,1330}; //c89 Variante
	//struct carModel CarAudi = {.carNumber=2021,.carPrice=15000,.carMaxSpeed=220,.carWeight=1330}; //c99 Variante

	printf("CarBMW.carNumber = %u\n",CarBMW.carNumber);
	printf("sizeof(CarBMW) = %lu\n",sizeof(CarBMW));
	printf("%lu %lu %lu %lu\n",sizeof(unsigned int),sizeof(uint32_t),sizeof(uint16_t),sizeof(float));





	return 0;
}


