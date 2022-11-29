#include <cstdio>
#include <cstdlib>
#include <typeinfo>
//#include "data_structures.h"

struct UTAITE {
	const char* name;
	int age;
	UTAITE();
	UTAITE(const char* _name, int _age);
	~UTAITE();
};

int main(){
	char* data = nullptr;
	data = new char[sizeof(UTAITE)];
	((UTAITE*)data)->name = "MafuMafu";
	((UTAITE*)data)->age = 31;
	printf("Direccion en RAM de data: %p\n", data);
	printf("Tamano en RAM de UTAITE: %ld UNITS\n", sizeof(UTAITE));
	printf("DATA->name: %s\n", ((UTAITE*)data)->name);	
	printf("DATA->age: %d\n", ((UTAITE*)data)->age);
	delete (UTAITE*)data;
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
