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
		unsigned int length;
	public:
		STACK();
		~STACK();
		void push(NODE it);
		void pop();
		NODE top();
		NODE bottom();
		NODE element(unsigned int index);
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
