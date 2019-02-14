#include "child.h"
#include <iostream>
using namespace std;

	void Child::print1(){
		cout<<"non virtual, child"<<endl;
	}
	void Child::print2(){
		cout<<"non virtual, child"<<endl;
	}
	void Child::test(){
	cout<<"child"<<endl;	
		_test();	
	}
	void Child::setTest(void(* in)()){
		_test=in;
	}


void (*Child::_test)();
