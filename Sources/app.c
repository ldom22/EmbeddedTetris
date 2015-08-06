#include "SCI.h"
#include "GPIO.h"
#include "TIM.h"
#include "app.h"

#define SQU 223

#define WIDTH 20
#define HEIGHT 20

#define true 1
#define false 0

typedef struct {
        unsigned char numOfRotates;
        unsigned char currentRotate;
        unsigned char pieceType;
        unsigned char x;
        unsigned char y;
        char attached;
        char *shapes; 
} piece;

void paintEdges(void);
void initFramebuffer(void);
void printFrameBuffer(void);
void printPiece(piece *p, char c);
char checkAttach(piece *p);
char lost(piece *p);
void eatlines();
void movePieceLeft(piece *p);
void movePieceRight(piece *p);
void Sleep(int ms);

char framebuffer[WIDTH][HEIGHT];

char pieces_long[2*4*4] = {
     ' ',SQU,' ',' ',
     ' ',SQU,' ',' ',
     ' ',SQU,' ',' ',
     ' ',SQU,' ',' ',
     
	' ',' ',' ',' ',
     SQU,SQU,SQU,SQU,
     ' ',' ',' ',' ',
     ' ',' ',' ',' ',
};

char pieces_three[4*4*4] = {
	 ' ',' ',' ',' ',
     ' ',' ',SQU,' ',
     ' ',SQU,SQU,SQU,
     ' ',' ',' ',' ',

     ' ',' ',SQU,' ',
     ' ',SQU,SQU,' ',
     ' ',' ',SQU,' ',
     ' ',' ',' ',' ',
     
     ' ',' ',' ',' ',
     ' ',SQU,SQU,SQU,
     ' ',' ',SQU,' ',
     ' ',' ',' ',' ',
     
     ' ',SQU,' ',' ',
     ' ',SQU,SQU,' ',
     ' ',SQU,' ',' ',
     ' ',' ',' ',' ',
     
};

char pieces_square[1*4*4] = {
     ' ',' ',' ',' ',
     ' ',SQU,SQU,' ',
     ' ',SQU,SQU,' ',
     ' ',' ',' ',' ',
};

char pieces_right[2*4*4] = {
     ' ',' ',' ',' ',
     ' ',SQU,SQU,' ',
     SQU,SQU,' ',' ',
     ' ',' ',' ',' ',
     
     ' ',' ',' ',' ',
     ' ',SQU,' ',' ',
     ' ',SQU,SQU,' ',
     ' ',' ',SQU,' ',
};

char pieces_left[2*4*4] = {
     ' ',' ',' ',' ',
     ' ',SQU,SQU,' ',
     ' ',' ',SQU,SQU,
     ' ',' ',' ',' ',
     
     ' ',' ',' ',' ',
     ' ',' ',SQU,' ',
     ' ',SQU,SQU,' ',
     ' ',SQU,' ',' ',
};

char pieces_L1[4*4*4] = {
	 ' ',' ',' ',' ',
     ' ',' ',' ',SQU,
     ' ',SQU,SQU,SQU,
     ' ',' ',' ',' ',

     ' ',SQU,SQU,' ',
     ' ',' ',SQU,' ',
     ' ',' ',SQU,' ',
     ' ',' ',' ',' ',
     
     ' ',' ',' ',' ',
     ' ',SQU,SQU,SQU,
     ' ',SQU,' ',' ',
     ' ',' ',' ',' ',
     
     ' ',SQU,' ',' ',
     ' ',SQU,' ',' ',
     ' ',SQU,SQU,' ',
     ' ',' ',' ',' ',
     
};

char pieces_L2[4*4*4] = {
	 ' ',' ',' ',' ',
     ' ',SQU,' ',' ',
     ' ',SQU,SQU,SQU,
     ' ',' ',' ',' ',

     ' ',' ',SQU,' ',
     ' ',' ',SQU,' ',
     ' ',SQU,SQU,' ',
     ' ',' ',' ',' ',
     
     ' ',' ',' ',' ',
     ' ',SQU,SQU,SQU,
     ' ',' ',' ',SQU,
     ' ',' ',' ',' ',
     
     ' ',SQU,SQU,' ',
     ' ',SQU,' ',' ',
     ' ',SQU,' ',' ',
     ' ',' ',' ',' ',
     
};

piece pieces[7] = {
		{2,0,0,WIDTH/2,1,false,&pieces_long[0]},
		{4,0,1,WIDTH/2,1,false,&pieces_three[0]},
		{1,0,2,WIDTH/2,1,false,&pieces_square[0]},
		{2,0,3,WIDTH/2,1,false,&pieces_right[0]},
		{2,0,4,WIDTH/2,1,false,&pieces_left[0]},
		{4,0,5,WIDTH/2,1,false,&pieces_L1[0]},
		{4,0,6,WIDTH/2,1,false,&pieces_L2[0]},
};

void paintEdges(void){
     int x,y;
     for(x=0; x<WIDTH; x++){
          framebuffer[x][0] = SQU;
          framebuffer[x][HEIGHT-1] = SQU;
     }
     for(y=0; y<HEIGHT; y++){
          framebuffer[0][y] = SQU;
          framebuffer[WIDTH-1][y] = SQU;
     }
}

void initFramebuffer(void){
     int x,y;
     for(y=0; y<HEIGHT; y++){
          for(x=0; x<WIDTH; x++){
               framebuffer[x][y] = ' ';
          }
     }
     paintEdges();
}

unsigned char updateScreen = false;
void printFrameBuffer(void){
     int x,y;
     char c[2];
     
     if(updateScreen==true){
    	 updateScreen = false;
    	 SCI_send("\033[2J\033[1;1H");
    	 for(y=0; y<HEIGHT; y++){
    		 for(x=0; x<WIDTH; x++){
    			 c[0] = framebuffer[x][y];
    			 c[1] = '\0';
    			 SCI_send(&c[0]);
    		 }
    		 SCI_send("\n\r\0");
     	 }
     }
}

void printPiece(piece *p, char c){
     int x,y;
     char v;
     for(x=0; x<4; x++){
          for(y=0; y<4; y++){
        	   v = *(p->shapes + (y*4) + ((p->currentRotate)*4*4) + x);
               if(v==SQU){
                    framebuffer[p->x+x][p->y+y] = c;
               }
          }
     }
}

void eatlines(){
	int x,y,y2;
	updateScreen = true;
	for(y=HEIGHT-2; y>0; y--){
		unsigned char eraseline = 1;
		for(x=1; x<(WIDTH-1); x++){
			if(framebuffer[x][y]!=SQU){
				eraseline = 0;
				x = WIDTH;
			}
		}
		if(eraseline==1){
			for(y2=y; y2>0; y2--){
				for(x=1; x<(WIDTH-1); x++){
					framebuffer[x][y2+1] = framebuffer[x][y2]; 
				}
			}
			y++;
		}
	}
}


char checkAttach(piece *p){
	int x,y;
	char v;
	//p-> y = (p->y)+1;
	for(x=0; x<4; x++){
		for(y=3; y>=0; y--){
			v = *(p->shapes + (y*4) + ((p->currentRotate)*4*4) + x);
			if(v==SQU){
				if(framebuffer[(p->x)+x][(p->y)+y+1]==SQU){
					//p->y = (p->y)-1;
					p->attached = true;
					eatlines();
					return true;
				}
				break;
			}
		}
	}
	return false;
}

char lost(piece *p){
     int x;
     if(p->attached==true){
          for(x=1; x<WIDTH-1; x++){
               if(framebuffer[x][1]==SQU){
                    return true;
               }
          }
     }
     return false;
}

void movePieceLeft(piece *p){
	int x,y;
	char v;
	updateScreen = true;
	p-> x = (p->x)-1;
	if(p-> x == 255){
		p-> x = 0;
	}
	for(x=0; x<4; x++){
		for(y=0; y<4; y++){
			v = *(p->shapes + (y*4) + ((p->currentRotate)*4*4) + x);
			if(v==SQU){
				if(framebuffer[((p->x)+x)][(p->y)+y]==SQU){
					p->x = (p->x)+1;
					x=4;
					y=4;
				}
			}
		}
	}
}

char createPiece(piece *p){
	int x,y;
	char v;
	for(x=0; x<4; x++){
		for(y=0; y<4; y++){
			v = *(p->shapes + (y*4) + ((p->currentRotate)*4*4) + x);
			if(v==SQU){
				if(framebuffer[(p->x)+x][(p->y)+y]==SQU){
					if(p->pieceType != 0){
						p->y=(p->y)-1;
					}
					p->attached = true;
					return false;
				}
			}
		}
	}
	return true;
}

void movePieceRight(piece *p){
	int x,y;
	char v;
	updateScreen = true;
	p-> x = (p->x)+1;
	for(x=0; x<4; x++){
		for(y=0; y<4; y++){
			v = *(p->shapes + (y*4) + ((p->currentRotate)*4*4) + x);
			if(v==SQU){
				if(framebuffer[(p->x)+x][(p->y)+y]==SQU){
					p->x = (p->x)-1;
					x=4;
					y=4;
				}
			}
		}
	}
}
void Sleep(int ms){
	do {
		while(TIM_wait1ms()==false){};
	}while(--ms);
}


void rotatePiece(piece *p){
	int x,y;
	char minX,minY,maxX,maxY,previousState,v;
	updateScreen = true;
	maxY=0;
	maxX=0;
	minX=3;
	minY=3;
	previousState = p -> currentRotate;
	p -> currentRotate = (p->currentRotate)+1;
	if(p->currentRotate>((p->numOfRotates)-1)){
		p->currentRotate = 0;
	}
	
	for(x=0; x<4; x++){
		for(y=0; y<4; y++){
			v = *(p->shapes + (y*4) + ((p->currentRotate)*4*4) + x);
			if(v==SQU){
				if(x>maxX){
					maxX = x;
				}
				if(x<minX){
					minX = x;
				}
				if(y>maxY){
					maxY = y;
				}
				if(y<minY){
					minY = y;
				}
			}
		}
	}
	maxX += p->x;
	minX += p->x;
	maxY += p->y;
	minY += p->y;
	
	if(maxX>=19||maxY>=19||minX<=0){
		p->currentRotate = previousState;
	}
}
void game(void){
	int c,frame,piece_ptr;
	unsigned char lastkey, key;
	unsigned char lostFlag;
	SCI_send(" \033[2J\033[1;1H");
	SCI_send("Press enter to begin... \n\r\0");
	SCI_read();
	
	initFramebuffer();
	printFrameBuffer();
		
	frame = 0;
	piece_ptr = 0;
	lastkey = 0;
	lostFlag = false;
	
	while(lostFlag==false){
		Sleep(50);
		printPiece(&pieces[piece_ptr],SQU);
		printFrameBuffer();
		if(checkAttach(&pieces[piece_ptr])==false){
			printPiece(&pieces[piece_ptr],' ');
		} else {
			pieces[piece_ptr].y = 1;
			pieces[piece_ptr].x = WIDTH/2;
			pieces[piece_ptr].currentRotate = 0;
			pieces[piece_ptr].attached = false;
			piece_ptr++;
			if(piece_ptr>6){
				piece_ptr = 0;
			}
			if(createPiece(&pieces[piece_ptr])==false){
				lostFlag = true;
			}
		}
		frame++;
		if(frame==10){
			pieces[piece_ptr].y++;
			updateScreen = true;
			frame = 0;
		}
		
		//handle input
		key = read_keypad();
		switch(SCI_read_nb()){
			case 'w': key = 4; break;
			case 'a': key = 3; break;
			case 's': key = 2; break;
			case 'd': key = 7; break;
		}
		
		if(key==7){
			movePieceRight(&pieces[piece_ptr]);
		} else if(key==3){
			movePieceLeft(&pieces[piece_ptr]);
		} else if((key==2)&&(lastkey==0)){
			//down
			while(checkAttach(&pieces[piece_ptr])==false){
				pieces[piece_ptr].y++;
			}
		} else if(key==5){
			//up
		} else if((key==4)&&(lastkey==0)){
			printPiece(&pieces[piece_ptr],' ');
			rotatePiece(&pieces[piece_ptr]);
			
			printPiece(&pieces[piece_ptr],223);
		}
		lastkey = key;
		lostFlag = lost(&pieces[piece_ptr]) || lostFlag;
	}
	
	SCI_send(" \033[2J\033[1;1H");
	printPiece(&pieces[piece_ptr],SQU);
	printFrameBuffer();
	SCI_send("You lost! \n\r\0");
}
