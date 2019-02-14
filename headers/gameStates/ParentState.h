#ifndef PARENTSTATE_H
#define PARENTSTATE_H
class State{
	public:
		State* parent;
		virtual State& init();
		virtual State& background();
		virtual State& draw();
		virtual State& handleKey(unsigned char key,char status,  int x, int y);
		virtual State& specialKeys(int key,char status,  int x, int y);
		virtual State& mouseMove(int x, int y);
		virtual State& mouseClick(int button,int state,  int x, int y);
		virtual State& ui();
		virtual State& process(int dt);
		virtual ~State();

};

#endif
