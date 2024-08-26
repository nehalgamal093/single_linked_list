#include "Node.h"

template<class T>
class LinkedList
{
private:
	Node<T>* head;
	int size;

public:
	LinkedList();
	void push_front(T value);
	void pop_front();
	void push_back(T value);
	void pop_back();
	void print();
	void insert(int index, T value);
	void erase(int index);
	~LinkedList();
};

