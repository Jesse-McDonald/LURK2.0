#include <iostream>
using namespace std;
class IOS{

	public:
	IOS(){}
	template<typename T>
	void operator>>(T& in){
		cin>>in;
	}
	template<typename T>
	void operator<<(T out){
		cout<<out;
	}
};
int main(){
	IOS s=IOS();
	int test;
	s>>test;
	s<<test;

}
