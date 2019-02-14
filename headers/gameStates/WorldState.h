#include<ParentState.h>
#include <LURK.h> 
#include <vector>
#include<math.h>
#include <string>
#ifndef WORLDSTATE_H
#define WORLDSTATE_H

class WorldState: public State{
	public:
	class View{
	public:
		float theta,phi;
		float lookingX,lookingY,lookingZ;
		View& calcLooking(float distance=1);
		View();
	};

	LURK::LURK lurk;
	View view;
	float x,y,z;//temp player xy
	WorldState();
	WorldState(std::vector<std::string> args);
	State& init();
	State& background();
	State& draw();
	//State& handleKey(unsigned char key,char status,  int x, int y);
	//State& specialKeys(int key,char status,  int x, int y);
	//State& mouseMove(int x, int y);
	//State& mouseClick(int button,int state,  int x, int y);
	State& ui();
	//State& process(int dt);

};

#endif

