#include <glinit.h>
#include<GL/glut.h>
#include <init.h>
#include <lurkInit.h>
#include <LURK.h>
#include <iostream>
#include<ServerSelect.h>
#define MAIN
#include <var.h>
#include <debug.h>
int init(int argc, char ** argv){
	std::vector<std::string> args=std::vector<std::string>();
	for(int i=0;i<argc;i++){
		args.push_back(std::string(argv[i]));
		debug(args[i]);
	}//unpack args
	debug(args.size());

			
	stack=StateStack();

glinit(argc,argv);//do this first, prevents nasty supprizes
//I think lighting is killed now figure out what the problem is
	stack.push(new ServerSelect(args));

	glutMainLoop();
	//this stuff will run if the window is closed
	debug("Exiting main");
	return 0;
}
