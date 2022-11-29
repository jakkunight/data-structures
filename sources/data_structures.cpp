#include "data_structures.h"

NODE::NODE(){
	length = 0;
	data = nullptr;
	next = nullptr;
	prev = nullptr;
}
NODE::NODE(char* buffer, long unsigned int l){
	length = l;
	data = new char[l];
	*data = *buffer;
	next = nullptr;
	prev = nullptr;
}
NODE::~NODE(){
	delete data;
}

STACK::STACK(){
	length = 0;
	current = nullptr;
}
STACK::~STACK(){
	delete current;
}
void STACK::push(NODE it){
	if(length == 0 && current == nullptr){
		current = new NODE;
		*current = it;
	}else{
		it.prev = current;
		current = new NODE;
		*current = it;
		current->prev->next = current;
	}
	length++;
}
void STACK::pop(){
	if(length == 0 && current == nullptr){
		return;
	}
	if(length == 1){
		delete current;
	}else{
		current = current->prev;
		delete current->next;
		current->next = nullptr;
	}
	length--;
}
NODE STACK::top(){
	return *current;
}
NODE STACK::bottom(){
	NODE buffer;
	if(length == 0){
		return buffer;
	}
	if(length == 1){
		buffer = *current;
	}else{
		buffer = *(current->prev);
		for(unsigned int i = 0; i < length - 1; i++){
			if(buffer.prev != nullptr){
				buffer = *(buffer.prev);
			}
		}
	}
	return buffer;
}
NODE STACK::element(unsigned int index){
	NODE buffer = *(current->prev);
	for(unsigned int i = 0; i < index - 1; i++){
		if(buffer.prev != nullptr){
			buffer = *(buffer.prev);
		}
	}
	return buffer;
}
