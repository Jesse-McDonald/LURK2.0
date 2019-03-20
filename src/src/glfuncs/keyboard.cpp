/*
#include <iostream>
#include <GL/glut.h>
#include <var.h>
//this file is depricated infavor  of the glForward files
void jump(int i){//place holder stub
return;
}
void escHandler(int s){
	mStatus.state=mStatus.state^s;
	glutSetCursor(GLUT_CURSOR_NONE*mStatus.state+GLUT_CURSOR_LEFT_ARROW*!mStatus.state);
}
void handlekey(char status, unsigned char key, int x, int y){//depricated
	switch(key){
		case 'w': // forward
			kStatus.forward = status;
			break;
		case 's': // backward
			kStatus.backward = status;
			break;
		case 'a': // left
			kStatus.stepleft = status;
			break;
		case 'd': // right
			kStatus.stepright = status;
			break;
		case ' ':
			jump(0);
			break;
		case 0x1B://escape key
			escHandler(status);
			break;
	}
}

void keyup(unsigned char key, int x, int y){
	stack.handleKey(0,key,x,y);
	//handlekey(0, key, x, y);
}

void keypress(unsigned char key, int x, int y){
	stack.handleKey(1,key,x,y);
	//handlekey(1, key, x, y);
}
*/


