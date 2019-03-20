#include "ParentState.h"
#include<GL/glu.h>
#include<GL/gl.h>
#include<GL/glut.h>
State& State::background(){
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glLoadIdentity();
	glEnable(GL_DEPTH_TEST);
	return *this;
}
State& State::init(){
	return *this;
}
State& State::draw(){

	
	return *this;
}
State& State::handleKey(unsigned char key, char status, int x, int y){
	return *this;
}
State& State::specialKeys(int key, char status,  int x, int y){
	return *this;
}
State& State::mouseMove(int x, int y){
	return *this;
}
State& State::mouseClick(int button, int state, int x, int y){
	return *this;
}
State& State::ui(){
	glLoadIdentity();
	glDisable(GL_DEPTH_TEST);
	return *this;
}
State& State::process(int dt){
	return *this;
}
State::~State(){}
