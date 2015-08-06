//include peripheral declarations
#include "derivative.h"

//inits SCI
void SCI_init(void) {
	//set baud rate
	SCI0BD = 139;//(busCLKHz/16/uartBaud
	//Enable SCI0/SCI1 receiver and transmitter
	SCI0CR2_RE = 1;  
	SCI0CR2_TE = 1;
}

//send data to SCI
void SCI_send(char array[]){
	int ptr = 0;
	//send string
	while(array[ptr]!='\0'){
		SCI0DRL = array[ptr];
		while(SCI0SR1_TC==0){};
		ptr++;
	}
}

//Reads data from the SCI
void SCI_read(void){
	unsigned char data;
	while(SCI0SR1_RDRF==0);
	data = SCI0DRL;
}

unsigned char SCI_read_nb(void){
	unsigned char data;
	data = 0;
	if(SCI0SR1_RDRF==0){
		return 0;
	} else {
		data = SCI0DRL;
		SCI0SR1_RDRF = 1;
	}
	return data;
}


