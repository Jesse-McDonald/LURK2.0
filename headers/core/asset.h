#ifndef Asset_H
#define Asset_H

template<class W>
	class Asset{
		public:
	
			W* contents;
			int use;	
			Asset(W* in){
				contents=in;
			}
			W* get(){
				use++;			
				return contents;
			}
			~Asset(){
				delete contents;
			}
			bool inUse(){
				return use>0;
			}
					
			Asset<W>& passTime(){
				use--;
				return this;
			}
			Asset<W>& reset(){
				use=0;
				return this;
			}

	};


#endif
