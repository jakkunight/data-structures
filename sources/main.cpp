#include <cstdio>
#include <cstdlib>
#include <typeinfo>
#include "data_structures.h"

struct UTAITE {
	const char* name;
	int age;
	UTAITE();
	UTAITE(const char* _name, int _age);
	~UTAITE();
};

int main(){
	QUEUE artists = QUEUE();
	artists.enqueue((char*)(new UTAITE("Soraru", 34)));
	printf("Current artist: %s\n", ((UTAITE*)(artists.next()))->name);
	artists.enqueue((char*)(new UTAITE("MafuMafu", 31)));
	printf("Current artist: %s\n", ((UTAITE*)(artists.next()))->name);
	artists.enqueue((char*)(new UTAITE("Sou", 29)));
	printf("Current artist: %s\n", ((UTAITE*)(artists.next()))->name);
	for(unsigned int i = 0; i < artists.length(); i++){
		printf("Artist #%li: %s\n", i, ((UTAITE*)(artists.element(i)))->name);
	}
	return 0;
}

UTAITE::UTAITE(){
	name = "";
	age = 0;
}
UTAITE::UTAITE(const char* _name, int _age){
	name = _name;
	age = _age;
}
UTAITE::~UTAITE(){
	
}
