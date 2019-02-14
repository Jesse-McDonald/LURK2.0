#include <iostream>
using namespace std;

class Super{
	public:	
	class Sub{
		public:
		static int test;
		static int *ref;
		static int (*func)(Sub&);
 	};
	Sub test;
	Super(int in){
		test=Sub();
		test.test=in;
	}	

} ;
int print(Super::Sub& self){
	cout<<"success!" << self.test<<endl;
	return 0;
}
int Super::Sub::test=0;
int *Super::Sub::ref=0;
int (*Super::Sub::func)(Super::Sub&)=print;

int main(){
	int t=8;
	Super test1(1);
	Super test2(2);
	test1.test.ref=&t;
	cout<<"test 1 test: "<<test1.test.test<<endl;
	cout<<"test 2 test: "<<test2.test.test<<endl;
	cout<<"ref: "<<*test2.test.ref<<endl;
	test1.test.func(test1.test);
	return 0;
}
