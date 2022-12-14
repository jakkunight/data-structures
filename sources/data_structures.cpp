#include "data_structures.h"

NODE::NODE(){
	length = 0;
	data = nullptr;
	next = nullptr;
	prev = nullptr;
}
NODE::NODE(char* buffer, long unsigned int l){
	length = l;
	data = buffer;
	next = nullptr;
	prev = nullptr;
}
NODE::~NODE(){
	delete[] data;
}

STACK::STACK(){
	size = 0;
	current = nullptr;
}
STACK::~STACK(){
	delete current;
}
void STACK::push(char* buffer){
	if(size == 0 && current == nullptr){
		current = new NODE;
		current->data = buffer;
	}else{
		NODE* aux = new NODE;
		aux->data = buffer;
		aux->prev = current;
		current = aux;
		current->prev->next = current;
	}
	size++;
}
void STACK::pop(){
	if(size == 0 && current == nullptr){
		return;
	}
	if(size == 1){
		delete current;
	}else{
		current = current->prev;
		delete current->next;
		current->next = nullptr;
	}
	size--;
}
char* STACK::top(){
	return current->data;
}
char* STACK::bottom(){
	NODE* aux = current;
	for(unsigned int i = 0; i < size; i++){
		if(aux->prev != nullptr){
			aux = aux->prev;
		}
	}
	return aux->data;
}
char* STACK::element(unsigned int index){
	NODE* aux = current;
	for(unsigned int i = 0; i < index; i++){
		if(aux->prev != nullptr){
			aux = aux->prev;
		}
	}
	return aux->data;
}

QUEUE::QUEUE(){
	current = nullptr;
	size = 0;
}
QUEUE::~QUEUE(){
	delete current;
}
void QUEUE::enqueue(char* buffer){
	if(size == 0){
		current = new NODE;
		current->data = buffer;
	}else{
		NODE* aux = new NODE;
		aux->data = buffer;
		NODE* last = current;
		for(unsigned int i = 0; i < size; i++){
			if(last->next != nullptr){
				last = last->next;
			}
		}
		last->next = aux;
		aux->prev = last;
	}
	size++;
}
void QUEUE::dequeue(){
	if(size == 0){
		return;
	}
	if(size == 1){
		delete current;
	}else{
		current = current->next;
		delete current->prev;
		current->prev = nullptr;
	}
	size--;
}
char* QUEUE::next(){
	return current->data;
}
char* QUEUE::last(){
	NODE* aux = current;
	for(unsigned int i = 0; i < size; i++){
		if(aux->next != nullptr){
			aux = aux->next;
		}
	}
	return aux->data;
}
char* QUEUE::element(unsigned int index){
	NODE* aux = current;
	for(unsigned int i = 0; i < index; i++){
		if(aux->next != nullptr){
			aux = aux->next;
		}
	}
	return aux->data;
}
