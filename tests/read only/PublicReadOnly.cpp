//example of making a public read only variable that is privatly read write
#include <iostream>
using namespace std;
class Safe{
	int _status;
	public:
	Safe(int a){
		_status=a;
	}	
	const int& status=_status;
	void setStatus(int a){
		_status=a;
	}
};
int main(){
	Safe s=Safe(10);
	cout<<s.status<<endl;
	s.setStatus(20);
	cout<<s.status<<endl;
	//s.status=5; compiler error
	cout<<s.status<<endl;
	return 0;
}

