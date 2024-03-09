#include "uart.h"
unsigned char buff[100]="learn_in_depth";
unsigned char  const buff2[100]="learn_in_depth";
unsigned char  const buff3[100]="learn_in_depth";
void main(void)
{
	uart_send_string(buff);
	
}