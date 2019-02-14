#define DEBUG
#ifndef DEBUG_H
#define DEBUG_H

#ifdef DEBUG
	#include<iostream>

	#define debug(a) debug_out(a,0)
	template<class T> void debug_out(T a,size_t b){
		std::cout<<"0x";
		std::cout.width(16);
		std::cout.fill('0');
		std::cout<<std::hex<<(((size_t *) &b)[3])<<" ";//this is a total hack
		std::cout<<std::dec;
		std::cout<<a<<std::endl;
	}
#else
	#define debug(a) 
#endif

#endif
