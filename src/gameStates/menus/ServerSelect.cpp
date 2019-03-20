#include <ServerSelect.h>
#include<GL/glu.h>
#include<GL/gl.h>
#include<GL/glut.h>
#include<iostream>
#include <var.h>
#include <WorldState.h>
#include <debug.h>
//add stuff here later I supose
ServerSelect::ServerSelect(){

}
ServerSelect::ServerSelect(std::vector<std::string> args){


}
State& ServerSelect::background(){
	State::background();

}
State& ServerSelect::init(){
debug("server select init");
	glutSetCursor(GLUT_CURSOR_LEFT_ARROW);
	return *this;
}
State& ServerSelect::ui(){
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
State& ServerSelect::process(int dt){
	std::cout<<"Connecting to isoptera.lcsc.edu:5100"<<std::endl;//temp 
	std::vector<std::string> args=std::vector<std::string>();
	args.push_back("Bypass");
	args.push_back("isoptera.lcsc.edu");
	args.push_back("5191");//this is a bit hacky but it should work
	stack.push(new WorldState(args));
}
