#ifndef GL_FORWARD_H
#define GL_FORWARD_H
	void drawScene();
	void windowClose();
	void handlekey(char status, unsigned char key, int x, int y);
	void keyup(unsigned char key, int x, int y);
	void keypress(unsigned char key, int x, int y);
	void handlespecial(unsigned char key,char status, int x, int y);
	void specialup(int key,int x,int y);
	void specialdown(int key,int x,int y);
	void mousemove(int x, int y);
	void mouseclick(int x, int y, int a, int b);
#endif
