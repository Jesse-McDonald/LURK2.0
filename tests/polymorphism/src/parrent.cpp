#include "parrent.h"
#include <iostream>
using namespace std;
	void Parrent::print1(){
		cout<<"non virtual, parrent"<<endl;
	}
	void Parrent::print2(){
		cout<<"virtual, parrent"<<endl;
	}
	void Parrent::test(){
		_test();	
	}
	void Parrent::setTest(void(* in)()){
		_test=in;
	}


void (*Parrent::_test)();
