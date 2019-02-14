#include <iostream>
#include<string>
using namespace std;
#define DEBUG
#include "debug.h"
void g(string a){
	debug(a);
}
void f(string a){
	debug(a);
	g(a+"g");
}
void e(string a){
	debug(a);
	f(a+"f");
}
void d(string a){
	debug(a);
	e(a+"e");
}
void c(string a){
	debug(a);
	d(a+"d");
}
void b(string a){
	debug(a);
	c(a+"c");
}
void a(string a){
	debug(a);
	b(a+"b");
}
int main(int argc, char ** argv){
	debug("main");
	a("a");
	b("b");
	c("c");
	d("d");
	e("e");
	f("f");
	g("g");
	return 1;
}
