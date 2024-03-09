#include<stdint.h>
#define STACK_Start_SP 0x20001000
extern int main(void);
void Reset_Handler(void);
void Default_handler()
{
	Reset_Handler();
}

void NMI_Handler(void)__attribute__((weak, alias("Default_handler")));;
void H_fault_Handler(void)__attribute__((weak, alias("Default_handler")));;
void MM_fault_Handler(void)__attribute__((weak, alias("Default_handler")));;
void Bus_fault(void)__attribute__((weak, alias("Default_handler")));;
void Usage_fault_Handler(void)__attribute__((weak, alias("Default_handler")));;

uint32_t vectors[]__attribute__((section(".vectors"))) ={
STACK_Start_SP,
(uint32_t) &Reset_Handler ,
(uint32_t) &NMI_Handler ,
(uint32_t) &H_fault_Handler ,
(uint32_t) &MM_fault_Handler ,
(uint32_t) &Bus_fault ,
(uint32_t) &Usage_fault_Handler 
};

void Reset_Handler(void)
{
	main();
}
