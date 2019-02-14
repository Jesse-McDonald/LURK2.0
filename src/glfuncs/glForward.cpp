#include<var.h>
#include <iostream>
#include<GL/glu.h>
#include<GL/gl.h>
#include<GL/glut.h>
using namespace std;
void drawScene(){
	stack.background();
	stack.draw();
	stack.ui();
	glutSwapBuffers();
}
void windowClose(){

}
void handlekey(unsigned char key,char status, int x, int y){
	stack.handleKey(key, status, x, y);
}
void handlespecial(unsigned char key,char status, int x, int y){
	stack.specialKeys(key, status, x, y);
}
void specialup(int key,int x,int y){
	handlespecial(key,0,x,y);
}
void specialdown(int key,int x,int y){
	handlespecial(key,1,x,y);
}
void keyup(unsigned char key, int x, int y){

	handlekey(key,0,x,y);
}
void keypress(unsigned char key, int x, int y){

	handlekey(key,1,x,y);
}

void mousemove(int x, int y){
	stack.mouseMove(x,y);
}
void mouseclick(int button, int state, int x, int y){
	stack.mouseClick(button,state,x,y);
}

