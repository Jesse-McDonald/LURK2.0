#ifndef ASSETS_H
#define ASSETS_H

#include <unordered_map>
#include <string>
#include <asset.h>

template<class T>
	class Assets{
		public:
			//Asset test=Asset();
			std::unordered_map<std::string,Asset<T>> assets;
			Assets(){ 
				assets=std::unordered_map<std::string,Asset<T>>();
			}
			Assets<T>& add(std::string name, T *obj){
				assets.insert(std::pair<std::string,Asset<T>>(name,Asset<T>(obj)));
				return *this;
			}
			Assets<T>& add(std::string name, Asset<T> obj){
				assets.insert(std::pair<std::string,Asset<T>>(name,obj));
				return *this;
			}
			Assets<T>& reload(){//this will mess with any internaly defined texturs, DO NOT CALL unless all assets are loaded from file
				for (auto const& asset : assets) {
					assets[asset.first]=T(asset.first);
				}
				return *this;

			}
			T* load(std::string filename){
				assets.insert(std::pair<std::string,Asset<T>>(filename,Asset<T>(new T(filename))));
				return assets[filename];
			}
			Asset<T>* get(std::string name){
				return *(this[name]);
			}
			
			T* operator[](std::string name){
				return assets[name].get();
			}
			Assets<T>& unload(std::string name){
				T *temp=assets[name].get();
				assets.erase(name);
				delete temp;
				return *this;
			}
			Assets<T>& passTime(){
				for (auto const& asset : assets) {
					assets[asset.first].passTime();
				}
			}
			Assets<T>& removeUnused(){
				for (auto const& asset : assets) {
					if (!assets[asset.first].inUse()){
						unload(asset.first);
					}
				}
			}
			Assets<T>& resetCount(){
				for (auto const& asset : assets) {
					assets[asset.first].reset();
				}
			}
			Asset<T>& clear(){
				for (auto const& asset : assets) {
					assets.unload(asset.first);
			  	}
				assets=std::unordered_map<std::string,Asset<T>>();
				return *this;
			}
			~Assets(){
				clear();
			}
	};


#endif
