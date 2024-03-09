#include "uart.h"
#define UART0DR   *((volatile unsigned int* const)((unsigned int*)0x101f1000))

void uart_send_string(unsigned char* ptr)
{
	while(*ptr)
	{
		UART0DR=(unsigned int)(*ptr);
		ptr++;
	}
}