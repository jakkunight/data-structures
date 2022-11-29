#ifndef DATA_STRUCTURES_H
#define DATA_STRUCTURES_H
#include <cstdlib>

struct NODE {
	long unsigned int length;
	char* data;
	struct NODE *next;
	struct NODE *prev;
	NODE();
	NODE(char* buffer, long unsigned int l);
	~NODE();
};

class STACK {
	private:
		NODE* current;
		unsigned int size;
	public:
		STACK();
		~STACK();
		void push(char* buffer);
		void pop();
		char* top();
		char* bottom();
		char* element(unsigned int index);
		unsigned int length(){
			return size;
		}
};

class QUEUE {
	private:
		
	public:
};

class DQUEUE {
	private:
		
	public:
};

class MATRIX {
	private:
		
	public:
};

class TABLE {
	private:
		
	public:
};

class TREE {
	private:
		
	public:
};

class GRAPHS {
	private:
		
	public:
};

#endif
