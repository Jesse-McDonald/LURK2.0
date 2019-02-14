#include<iostream>
#include<map>

/**
 Some of you might think this piece of code is evil, bad, or just plane should not exist.  You are probiably right.
Incase it is difficulty to read, this program is a proof of Concept
Polymorphic class which can dynamicly change its own class to any
registered sub class based on the value of selector    
*/
using namespace std;

class P{
	public:
	int selector;
	P(){selector=1;}
	static map<int,P*> children; //the actual objects stored are not important, just that they are all children of P and have clone() defined 
 	void rebase(P*& self);
	virtual P* clone();
	virtual void print();
	virtual ~P(){} 
};
class C: public P{
	public:
	C(){selector=2;}
	virtual void print();
	virtual C* clone();
	virtual ~C(){}
};
map<int,P*> P::children=map<int,P*>(); 
void P::rebase(P*& self){
	P* temp=children[selector]->clone();//make an object clone of selector object
	delete self;//if you want to copy some of the old data this should be deleted later
	self=temp;
	//self=(C*)self; 
}
P* P::clone(){
	return new P();
}
void P::print(){
	cout<<"P"<<endl;
}
void C::print(){
	cout<<"C"<<endl;
}
C* C::clone(){
	return new C();
}	

int main(){
	P *test;
	test= new P();
	//register possible children
	test->children.insert(std::pair<int,P*>(1,new P()));
	test->children.insert(std::pair<int,P*>(2,new C()));

	//testing inheritance and virtual functions
	test->print();
	test->rebase(test);
	test->print();
	test->selector=2;
	test->rebase(test);
	test->print();
	test->selector=1;
	test->rebase(test);
	test->print();
	
	delete test->children[1];
	delete test->children[2];

	delete test;
}
