

#include <StateStack.h>
StateStack::StateStack(){
	nullState=State();
	top=&nullState;
}
StateStack& StateStack::push(State* state){
	state->parent=top;
	top=state;
	stack.push_back(state);
	top->init();
	return *this;
}
State* StateStack::slip(){//returns top state without destroying it
	if(stack.size()>0){	
		State* temp=top;
		stack.pop_back();
		top=stack.back();
		top->init();
	}
}
StateStack& StateStack::pop(){
	if(stack.size()>0){
		delete top;
		stack.pop_back();
		top=stack.back();
		top->init();
	}
	return *this;
}
StateStack& StateStack::meltDown(){
	for(int i=0;i<stack.size();i++){
		pop();
	}
	top=&nullState;
	return *this;
}

StateStack& StateStack::background(){
	top->background();
	return *this;
}
StateStack& StateStack::draw(){
	top->draw();
	return *this;
}
StateStack& StateStack::handleKey (unsigned char key,char status, int x, int y){
	top->handleKey(key,status,x,y);
	return *this;
}
StateStack& StateStack::specialKeys( int key,char status, int x, int y){
	top->specialKeys(key,status,x,y);
	return *this;
}
StateStack& StateStack::mouseMove(int x, int y){
	top->mouseMove(x,y);
	return *this;
}
StateStack& StateStack::mouseClick(int button, int state, int x, int y){
	top->mouseClick(button,state,x,y);
	return *this;
}
StateStack& StateStack::ui(){
	top->ui();
	return *this;
}
StateStack& StateStack::process(int dt){
	top->process(dt);
	return *this;
}

