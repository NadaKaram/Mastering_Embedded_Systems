/*
Nada Karam
*/
MEMORY
{
flash(RW) : ORIGIN = 0X00000000, LENGTH =512M 
sram(RWX) : ORIGIN = 0X20000000, LENGTH = 512M

}
SECTIONS 
{
       .text : {
	           *(.vectors*)
	           *(.text*)
			   *(.rodata)
			   _E_text = . ;
	   } > flash
	   .data : {
	           _S_Data = . ;
	           *(.data)
			   _E_Data = . ;
	   }> sram AT> flash
	   .bss : {
	         _S_bss = . ;
	           *(.bss*)
			  . = ALIGN(4);
			  _E_bss = . ;
	   } > sram
}

 