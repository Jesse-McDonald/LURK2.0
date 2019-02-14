#include <iostream>
#include <LURK.h>
#include <bitset>
#include <var.h>
using namespace std;
using namespace LURK;
void* handlePkg(LURK::pkg* pak,void* t){
	std::cout<<"basic Pkg"<<std::endl;
	std::cout<<(int)pak->type<<std::endl<<std::endl;

	pak->send(lurk.network);	
}
void* handleMsgPkg(LURK::pkg* pak,void* t){
	LURK::msgPkg* pk=(LURK::msgPkg*)pak;
	std::cout<<"msg Pkg"<<std::endl;
	std::cout<<(int)pk->type<<std::endl;
	std::cout<<pk->sender<<std::endl;
	std::cout<<pk->recName<<std::endl;
	std::cout<<pk->msg<<std::endl<<std::endl;

	pk->send(lurk.network);
}
void* handleChRoomPkg(LURK::pkg* pak,void* t){
	LURK::chRoomPkg* pk=(LURK::chRoomPkg*)pak;
	std::cout<<"Change Room Pkg"<<std::endl;
	std::cout<<(int)pk->type<<std::endl;
	std::cout<<pk->number <<std::endl;

	pk->send(lurk.network);
} 
void* handleFightPkg(LURK::pkg* pak,void* t){
	LURK::fightPkg* pk=(LURK::fightPkg*)pak;
	std::cout<<"Fight Pkg"<<std::endl;
	std::cout<<(int)pk->type<<std::endl;

	pk->send(lurk.network);
} 
void* handlePvpPkg(LURK::pkg* pak,void* t){
	LURK::pvpPkg* pk=(LURK::pvpPkg*)pak;
	std::cout<<"PVP Pkg"<<std::endl;
	std::cout<<(int)pk->type<<std::endl;
	std::cout<<pk->target <<std::endl;

	pk->send(lurk.network);
}  
void* handleLootPkg(LURK::pkg* pak,void* t){
	LURK::lootPkg* pk=(LURK::lootPkg*)pak;
	std::cout<<"Loot Pkg"<<std::endl;
	std::cout<<(int)pk->type<<std::endl;
	std::cout<<pk->target<<std::endl;

	pk->send(lurk.network);
}  
void* handleStartPkg(LURK::pkg* pak,void* t){
	LURK::startPkg* pk=(LURK::startPkg*)pak;
	std::cout<<"Start Pkg"<<std::endl;
	std::cout<<(int)pk->type<<std::endl;

	pk->send(lurk.network);
}  
void* handleErrorPkg(LURK::pkg* pak,void* t){
	LURK::errorPkg* pk=(LURK::errorPkg*)pak;
	std::cout<<"Error Pkg"<<std::endl;
	std::cout<<(int)pk->type<<std::endl;
	std::cout<<(int)pk->code <<std::endl;
	std::cout<<pk->msg <<std::endl;

	pk->send(lurk.network);
} 
void* handleAccPkg(LURK::pkg* pak,void* t){
	LURK::accPkg* pk=(LURK::accPkg*)pak;
	std::cout<<"Accept Pkg"<<std::endl;
	std::cout<<(int)pk->type<<std::endl;
	std::cout<<(int)pk->accType <<std::endl;

	pk->send(lurk.network);
}  
void* handleRoomPkg(LURK::pkg* pak,void* t){
	LURK::roomPkg* pk=(LURK::roomPkg*)pak;
	std::cout<<"Room Pkg"<<std::endl;
	std::cout<<(int)pk->type<<std::endl;
	std::cout<<pk->number <<std::endl;
	std::cout<<pk->name <<std::endl;
	std::cout<<pk->description <<std::endl;

	pk->send(lurk.network);
}  
void* handleCharPkg(LURK::pkg* pak,void* t){
	LURK::charPkg* pk=(LURK::charPkg*)pak;
	std::cout<<"Char Pkg"<<std::endl;
	std::cout<<(int)pk->type<<std::endl;
	std::cout<<pk->name <<std::endl;
	std::cout<<bitset<8>(pk->flags )<<std::endl;
	std::cout<<pk->atk <<std::endl;
	std::cout<<pk->def <<std::endl;
	std::cout<<pk->reg <<std::endl;
	std::cout<<pk->health <<std::endl;
	std::cout<<pk->gold <<std::endl;
	std::cout<<pk->room <<std::endl;
	std::cout<<pk->description <<std::endl;

	pk->send(lurk.network);
}  
void* handleGamePkg(LURK::pkg* pak,void* t){
	LURK::gamePkg* pk=(LURK::gamePkg*)pak;
	std::cout<<"Game Pkg"<<std::endl;
	std::cout<<(int)pk->type<<std::endl;
	std::cout<<pk->init <<std::endl;
	std::cout<<pk->statMax <<std::endl;
	std::cout<<pk->description <<std::endl;

	pk->send(lurk.network);
}  
void* handleLeavePkg(LURK::pkg* pak,void* t){
	LURK::leavePkg* pk=(LURK::leavePkg*)pak;
	std::cout<<"Leave Pkg"<<std::endl;
	std::cout<<(int)pk->type<<std::endl;

	pk->send(lurk.network);
}  
void* handleConnectionPkg(LURK::pkg* pak,void* t){
	LURK::connectionPkg* pk=(LURK::connectionPkg*)pak;
	std::cout<<"Connection Pkg"<<std::endl;
	std::cout<<(int)pk->type<<std::endl;
	std::cout<<pk->number <<std::endl;
	std::cout<<pk->name <<std::endl;
	std::cout<<pk->description <<std::endl;

	pk->send(lurk.network);
} 
int lurkInit(std::vector<std::string> args){
	
	LURK::pkg* base= new LURK::pkg();//create base package

	base->registerPkg(0,new LURK::pkg);//add packages to map
	base->registerPkg(1,new LURK::msgPkg);
	base->registerPkg(2,new LURK::chRoomPkg);
	base->registerPkg(3,new LURK::fightPkg);
	base->registerPkg(4,new LURK::pvpPkg);
	base->registerPkg(5,new LURK::lootPkg);
	base->registerPkg(6,new LURK::startPkg);
	base->registerPkg(7,new LURK::errorPkg);
	base->registerPkg(8,new LURK::accPkg);
	base->registerPkg(9,new LURK::roomPkg);
	base->registerPkg(10,new LURK::charPkg);
	base->registerPkg(11,new LURK::gamePkg);
	base->registerPkg(12,new LURK::leavePkg);
	base->registerPkg(13,new LURK::connectionPkg);
	
	base->packages[0]->registerHandler(handlePkg);//register the handlers 
	base->packages[1]->registerHandler(handleMsgPkg);
	base->packages[2]->registerHandler(handleChRoomPkg); 
	base->packages[3]->registerHandler(handleFightPkg); 
	base->packages[4]->registerHandler(handlePvpPkg); 
	base->packages[5]->registerHandler(handleLootPkg); 
	base->packages[6]->registerHandler(handleStartPkg); 
	base->packages[7]->registerHandler(handleErrorPkg); 
	base->packages[8]->registerHandler(handleAccPkg); 
	base->packages[9]->registerHandler(handleRoomPkg); 
	base->packages[10]->registerHandler(handleCharPkg); 
	base->packages[11]->registerHandler(handleGamePkg); 
	base->packages[12]->registerHandler(handleLeavePkg); 
	base->packages[13]->registerHandler(handleConnectionPkg); 
	
	lurk.connect(args[1],args[2]);
	if (lurk.network.error){
		perror("Network Error");
		exit(0);
	}
	lurk.startHandler();

	return 0;
}
