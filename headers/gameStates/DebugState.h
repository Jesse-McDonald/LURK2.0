#include<ParentState.h> 
#ifndef DEBUGSTATE_H
#define DEBUGSTATE_H
#include<iostream>
#include<math.h>
#include <physics.h>
using namespace std;

class DebugState: public State{
	public:
	class View{
	public:
		float theta,phi;
		float lookingX,lookingY,lookingZ;
		View& calcLooking(float distance=1);
		View();
	};

	View view;
	DebugState(){cout<<"Created Debug State"<<endl;}
	State& background(){cout<<"Debug Background"<<endl;}
	State& draw();
	State& handleKey(unsigned char key,char status,  int x, int y){cout<<"Debug Handle Key"<<endl;}
	State& specialKeys(int key,char status,  int x, int y){cout<<"Debug Special Key"<<endl;}
	State& mouseMove(int x, int y){cout<<"Debug Mouse Move"<<endl;}
	State& mouseClick(int button, int state, int x, int y){cout<<"Debug Mouse Click"<<endl;}
	State& ui(){cout<<"Debug UI"<<endl;}
	State& process(int dt){cout<<"Debug Process"<<endl;}
	~DebugState(){cout<<"Destroy Debug State"<<endl;}
};

#endif
