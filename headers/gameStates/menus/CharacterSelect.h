#include<ParentState.h> 
#include <vector>
#include <string>
#ifndef CHARACTERELECT_H
#define CHARACTERSELECT_H
class CharacterSelect: public State{
	public:
	CharacterSelect();
	CharacterSelect(std::vector<std::string> args);
	State& ui();
	State& background();
	State& init();
	State& process(int dt);
};

#endif
