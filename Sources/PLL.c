//include peripheral declarations
#include "derivative.h"

//inits the pll
void PLL_init(void) {
	CPMUCLKS_PLLSEL = 1;				//FBUS = FPLL/2.   FBUS = 32MHz, 
	CPMUREFDIV_REFFRQ = 1;				//Reference clock between 2MHZ and 6MHZ.	
	CPMUREFDIV_REFDIV = 0x1;		    //FREF=8/(1+1) = 4MHZ		
	CPMUSYNR_VCOFRQ = 0x1;             	//FVCO is between 48MHZ and 80MHZ	
	CPMUSYNR_SYNDIV = 0x7;				//FVCO = 2xFREFx(SYNDIV+1)   =   FVCO = 2x4x(7+1) = 64MHZ
	CPMUPOSTDIV_POSTDIV = 0x0;			//FPLL = FVCO/(POSTDIV+1).  FPLL = 64MHZ/(0+1)    FPLL = 64MHz	
	CPMUOSC_OSCE = 1;					//External oscillator enable. 8MHZ.        FREF=FOSC/(REFDIV+1)		
	while(!CPMUIFLG_LOCK){}				// Wait for LOCK.      	
	CPMUIFLG = 0xFF;					// clear CMPMU int flags - not needed but good practice    
}
