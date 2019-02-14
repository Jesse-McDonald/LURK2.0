#include <iostream>
#include "child.h"
#include "parrent.h"
#include "grandchild.h"
using namespace std;
void func1(){
	cout<<"Test1"<<endl;
}
void func2(){
	cout<<"Test2"<<endl;
}
int main(){
	Parrent *test;

	test= new Child();
	//testing inheritance and virtual functions
	test->print1();
	
	test->print2();
	//delete test;
	test=new GrandChild();
	test->print1();
	test->print2();
	//testing static function pointers	
	test=new Parrent();	
	test->setTest(func1);
	Parrent *test2=new Parrent();
	test->test();
	test2->test();
	test=new Child();
	test->setTest(func2);
	test->test();
	test=new Parrent();
	test->test();
	test2->test();
	//test->print3();
}
