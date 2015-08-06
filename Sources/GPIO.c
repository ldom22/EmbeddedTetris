//include peripheral declarations
#include "derivative.h"

//inits GPIO
void GPIO_init() {
	DDRADH_DDRADH2 = 0;		/* button matrix columns as inputs */
	DDRADH_DDRADH3 = 0;
	DDRADH_DDRADH4 = 0;
	PERADH_PERADH2 = 1; 	/* pull ups for matrix inputs */
	PERADH_PERADH3 = 1;
	PERADH_PERADH4 = 1;
	DIENADH_DIENADH2 = 1; 	/* inputs */
	DIENADH_DIENADH3 = 1;
	DIENADH_DIENADH4 = 1;
	DDRADH_DDRADH5 = 1;		/* button matrix rows as outputs */
	DDRADH_DDRADH6 = 1;
	DDRADH_DDRADH7 = 1;
	DDRP = 0x0F;			/* LEDs as outputs */
	
	/*I2C are outputs with pull ups*/
	DDRT_DDRT0 = 1;
	DDRT_DDRT1 = 1;
	PERT_PERT0 = 1;
	PERT_PERT1 = 1;
	//initially drive sda and sck to 1
	PTT_PTT0 = 1;
	PTT_PTT1 = 1;
	
	/* SPI accelerometer*/
	DDRS_DDRS0 = 0; //MISO0 is input
	PERS_PERS0 = 1;
	DDRS_DDRS1 = 1; //MOSI0 is output
	DDRS_DDRS1 = 1; //SCK0 is output
}

//reads the keypad
unsigned char read_keypad(void){
	unsigned char i,shift;
	shift = 0b00100000;
	//decode key
	for(i=0; i<3; i++){
		PTADH = shift;
		if(!PTADH_PTADH2){return ((i*3)+1);}
		if(!PTADH_PTADH3){return ((i*3)+2);}
		if(!PTADH_PTADH4){return ((i*3)+3);}
		shift = shift<<1;
	}
	//nothing was pressed
	return 0;
}
