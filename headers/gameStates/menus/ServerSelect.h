#include<ParentState.h> 
#include <vector>
#include <string>
#ifndef SERVERSELECT_H
#define SERVERSELECT_H
class ServerSelect: public State{
	public:
	ServerSelect();
	ServerSelect(std::vector<std::string> args);
	State& ui();
	State& background();
	State& init();
	State& process(int dt);
};

#endif
