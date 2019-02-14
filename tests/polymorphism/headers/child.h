#ifndef CHILD
#define CHILD
#include "parrent.h"

class Child: public Parrent{
	private:
	static void(* _test)();
	public:
	virtual void test();
	virtual void setTest(void(* in)());
	void print1();
	void print2();
};
#endif
