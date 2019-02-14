#include <iostream>
using namespace std;
class State{
	public:
	State* parrent;
	State(){
		parrent=0;
	}
	virtual void run(){
		cout<<"state"<<endl;
	}
};
class DebugState: public State{
	public:
	static int count;
	int me;
	DebugState(){
		count++;
		me=count;
	}	
	void run(){
		cout<<"debug "<<me<<endl;
		
	}
};
int DebugState::count=0;
class MenuState: public State{
	public:
	void run(){
		if(parrent!=0) parrent->run();
		cout<<"menu"<<endl;
		
	}
};
#include <vector>
class StateStack{
	public:
	vector<State*> stack;
	State* top=0;
	StateStack& run(){

		if (top!=0) top->run();
		return *this;
	}	
	StateStack& push(State* state){
		state->parrent=top;
		top=state;
		stack.push_back(state);
		return *this;
	}
	State* slip(){//returns top state without destroying it
		State* temp=top;
		stack.pop_back();
		top=stack.back();
	}
	StateStack& pop(){

		delete top;
		stack.pop_back();
		top=stack.back();
		return *this;
	}
	StateStack& meltDown(){
		for(int i=0;i<stack.size();i++){
			pop();
		}
		top=0;
		return *this;
	}
	
};

int main(){
	StateStack state=StateStack();
	state.push(new DebugState());

	state.push(new DebugState());

	state.push(new DebugState());


	state.push(new MenuState());
	state.run();
	state.pop();
	state.run();
	state.pop();
	state.run();
	state.meltDown();
}
