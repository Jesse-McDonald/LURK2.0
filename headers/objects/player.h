#ifndef PLAYER_H
#define PLAYER_H
#include<entity.h>
//refactor this... not sure how far
class Player: public Entity{
	public:
	unsigned int ID;
	float pvx=0;//player controled velocity, this is set by buttons
	float pvy=0;//think of these as velocity offsets
	float pvz=0;
	float speed;
	char state; //0 normal, 1 dead, 
	float theta,phi; //heading directions
	float oTheta,oPhi;//old heading
	Player& move(float dt);
	Player(float ix, float iy, float iz, float itheta ,float iphi , LoadedObject *obj, float iDX=0, float iDY=0, float iDZ=0, float iDTheta=0, float iDPhi=0);
	Player& buttonCalc();
	Player& draw();
};
#endif
