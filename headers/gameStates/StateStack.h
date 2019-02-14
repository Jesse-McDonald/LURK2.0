#include <vector>
#include <ParentState.h>
class StateStack{
	public:
	std::vector<State*> stack;
	State* top;
	State nullState;
	StateStack();
	StateStack& push(State* state);
	State* slip();//returns top state without destroying it
		
	StateStack& pop();
	StateStack& meltDown();
	virtual StateStack& background();
	virtual StateStack& draw();
	virtual StateStack& handleKey(unsigned char key,char status,  int x, int y);
	virtual StateStack& specialKeys(int key,char status,  int x, int y);
	virtual StateStack& mouseMove(int x, int y);
	virtual StateStack& mouseClick(int button,int status,  int x, int y);
	virtual StateStack& ui();
	virtual StateStack& process(int dt);
};
