

#include<stdint.h>

int main(void)
{
	//Clock Control
	uint32_t volatile *pClkCtrlReg =   (uint32_t*)0x40023830;
	*pClkCtrlReg |= ( 1 << 3); //Enable Clock of Port D
	*pClkCtrlReg |= ( 1 << 0); //Enable Clock of Port A

	// Port D
	uint32_t volatile *pPortDModeReg = (uint32_t*)(0x40020C00 + 0x00);
	uint32_t volatile *pPortDOutReg =  (uint32_t*)(0x40020C00 + 0x14);
	// Pin D12
	*pPortDModeReg &= ~( 3 << 24); //clear the 24th and 25th bit positions
	*pPortDModeReg |= ( 1 << 24); //make 24th bit position as 1

	// Port A
	uint32_t volatile *pPortAModeReg = (uint32_t*)(0x40020000  + 0x00);
	uint32_t volatile *pPortAInReg   = (uint32_t*)(0x40020000  + 0x10);
	// Pin A0
	*pPortAModeReg &= ~( 3 << 0); //clear the 1st and 2nd bit positions

	uint32_t Value_A0 = 0;

	while(1)
	{
		// Read Port A0
		Value_A0 = *pPortAInReg;
		Value_A0 = Value_A0 & 0x1;

		if (Value_A0 == 1)
			*pPortDOutReg |= ( 1 << 12);
		else
			*pPortDOutReg &= ~( 1 << 12);

		//This loop executes for 10K times
		//for(uint32_t i=0 ; i < 300000 ; i++ );
	}

}
