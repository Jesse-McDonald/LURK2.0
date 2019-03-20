#include <WorldState.h>
#include<GL/glu.h>
#include<GL/gl.h>
#include<GL/glut.h>
#include <var.h>
#include <iostream>
#include <lurkInit.h>
#include <debug.h>
WorldState::View& WorldState::View::calcLooking(float distance){
	float r=cos(phi);
	lookingX=distance*r*sin(theta);
	lookingY=distance*sin(phi);
	lookingZ=distance*r*cos(theta);
	
	return *this;
}
WorldState::View::View(){
	theta=0;
	phi=0;
	calcLooking(1);
}
//add stuff here later I supose

WorldState::WorldState(std::vector<std::string> args):WorldState(){
	
	if(args.size()<3){//use this if to determin initial screen
		
		std::cout<<"Usage: "<<args[0]<<" serverIp port"<<std::endl; 
		//stack.pop();//we arent on the stack yet
	}else{
		lurkInit(args,(void *)this);
	}

}
State& WorldState::background(){
	State::background();

}
WorldState::WorldState(){
	x=0;y=0;z=0;
	view=View();
}
State& WorldState::draw(){
	State::draw();
	gluPerspective(90, 1, .1, 1000);

	float yheight = 0;
	view.calcLooking();
	gluLookAt(x, y, z,   view.lookingX+x, view.lookingY+y, view.lookingZ+z, 0, 1, 0);


//this is the floor
	glBegin(GL_QUADS);
	for(int x = -10; x < 10; x++){
		for(int z = -10; z < 10; z++){
			float material_color[] = {0.2+z/50.0, 0.9, 0.2+z/50.0, 1.0};
			glMaterialfv(GL_FRONT_AND_BACK, GL_AMBIENT_AND_DIFFUSE, material_color);
			float material_spec_color[] = {.2+z/50.0, .9, .2+z/50.0, 1};
			glMaterialfv(GL_FRONT_AND_BACK, GL_SPECULAR, material_spec_color);
			glNormal3f(0, 1, 0);
			glVertex3f(x, -1, z);			
			glVertex3f(x+1, -1, z);			
			glVertex3f(x+1, -1, z+1);			
			glVertex3f(x, -1, z+1);			
		}
	}
	glEnd();
}
State& WorldState::init(){
	glutSetCursor(GLUT_CURSOR_LEFT_ARROW);
	return *this;
}
State& WorldState::ui(){
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
