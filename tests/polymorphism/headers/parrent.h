#ifndef PARRENT
#define PARRENT

class Parrent{
	private:
		static void(* _test)();
	public:
	virtual void test();
	virtual void setTest(void(* in)());
	void print1();
	virtual void print2();


};

#endif
