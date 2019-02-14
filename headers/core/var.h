#ifndef VAR_H
#define VAR_H
#ifdef MAIN
#define EXTERN
#define INIT = 0
#else
#define EXTERN extern
#define INIT	
#endif
#include <LURK.h>
#include <mutex>
#include <StateStack.h>
#include <WorldState.h>
//#include <connection.h>
struct Keys {
	bool forward;
	bool backward;
	bool stepright;
	bool stepleft;
	bool activate;
};
struct Mouse{
	int x;
	int y;
	char state;
};
EXTERN Mouse mStatus;
EXTERN Keys kStatus;
EXTERN int width INIT,height INIT ;
EXTERN float fps;
EXTERN LURK::LURK lurk;//Lurk object
EXTERN StateStack stack;
//EXTERN World world;
//EXTERN std::mutex cleanLock;
//extern Connection* connection;
#endif

