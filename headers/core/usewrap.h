#ifndef USEWRAP_H
#define USEWRAP_H

template<class W>
	class UseWrap{
		public:
	
			W* contents;
			int use;	
			UseWrap(W* in){
				contents=in;
			}
			W* get(){
				use++;			
				return contents;
			}
			~UseWrap(){
				delete contents;
			}
			bool inUse(){
				return use>0;
			}
					
			UseWrap<W>& passTime(){
				use--;
				return this;
			}
			UseWrap<W>& reset(){
				use=0;
				return this;
			}

	};


#endif
