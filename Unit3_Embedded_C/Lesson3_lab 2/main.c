typedef volatile unsigned int vuint32_t;

#include <stdint.h>
#define RCC_BASE      0x40021000
#define GPIOA_BASE    0X40010800
#define RCC_APB2ENR  *(volatile uint32_t *)(RCC_BASE + 0X18)
#define GPIOA_CRH   *(volatile uint32_t *)(GPIOA_BASE + 0X04)
#define GPIOA_ODR   *(volatile uint32_t *)(GPIOA_BASE + 0x0C)

// bit fields
#define RCC_TOPAEN   (1<<2)
#define GPIO13       (1UL<<13)
typedef union {
	vuint32_t all_fields;
	struct {
		vuint32_t reserved:13;
		vuint32_t p_13:1;
	}Pin;
}R_ODR_t;
volatile R_ODR_t *R_ODR = (volatile R_ODR_t*)(GPIOA_BASE + 0x0C);
unsigned char g_variables[3]={1,2,3};
unsigned char const const_variable[3]={1,2,3};
int main(void)
{
	RCC_APB2ENR |=RCC_TOPAEN;
	GPIOA_CRH &=0XFF0FFFFF;
	GPIOA_CRH |=0X00200000;
	while(1)
	{
		R_ODR->Pin.p_13=1;
		for(int i=0;i<5000;i++);
		R_ODR->Pin.p_13=0;
		for(int i=0;i<5000;i++);
		
	}
}