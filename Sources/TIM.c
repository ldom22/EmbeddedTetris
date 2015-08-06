//include peripheral declarations
#include "derivative.h"

//initialises timer
void TIM_init(void){
	TIM0TSCR2_PR = 0b101;	//1. Configure the prescaler (TSCR2[PR]).
	TIM0TIOS = 0;			//2. Configure needed channels as Input Capture (TIOS[IOSx]=0) or Output Compare (TIOS[IOSx]=1).
	TIM0TIE = 0;			//3. Enable interrupts if needed in the timer interrupt enable register (TIE).
	TIM0TSCR1_TEN = 1;		//4. Set the timer enable bit (TSCR1[TEN]).
}

//returns true if 1ms has passed
char TIM_wait1ms(void){
	if(TIM0TFLG2_TOF==1){
		TIM0TFLG2_TOF = 1;
		TIM0TCNT = 0xFFFF - 500;
		return 1;
	} else {
		return 0;
	}
}
