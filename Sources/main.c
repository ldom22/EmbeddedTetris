#include <hidef.h> /* for EnableInterrupts macro */
#include "derivative.h" /* include peripheral declarations */

#include "PLL.h"
#include "SCI.h"
#include "TIM.h"
#include "GPIO.h"

#include "app.h"

void main(void){
	
	PLL_init();
	SCI_init();
	TIM_init();
	GPIO_init();
	
	game();
	
	for(;;){}
}
