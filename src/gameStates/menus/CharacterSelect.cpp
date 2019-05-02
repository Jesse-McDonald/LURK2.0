#include <CharacterSelect.h>
#include<GL/glu.h>
#include<GL/gl.h>
#include<GL/glut.h>
#include<iostream>
#include <var.h>
#include <WorldState.h>
#include <debug.h>
//add stuff here later I supose
CharacterSelect::CharacterSelect(){

}
CharacterSelect::CharacterSelect(std::vector<std::string> args){


}
State& CharacterSelect::background(){
	State::background();

}
State& CharacterSelect::init(){

	glutSetCursor(GLUT_CURSOR_LEFT_ARROW);
	return *this;
}
State& CharacterSelect::ui(){
	State::ui();

	glBegin(GL_LINES);
	float material_color[] = {1,0, 0, 1.0};
	glMaterialfv(GL_FRONT_AND_BACK, GL_AMBIENT_AND_DIFFUSE, material_color);
	float material_spec_color[] = {1, 0, 0, 1};
	glMaterialfv(GL_FRONT_AND_BACK, GL_SPECULAR, material_spec_color);
	///glColor3f(1,0,0);
	glVertex3f(0, -0.1, 0);
	glVertex3f(0, 0.1, 0);
	glVertex3f(.1, 0, 0);
	glVertex3f(-.1, 0, 0);
	glEnd();
	

	return *this;
}
State& CharacterSelect::process(int dt){
	
}
