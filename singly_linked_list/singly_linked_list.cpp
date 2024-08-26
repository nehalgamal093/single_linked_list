#include <iostream>
#include "LinkedList.h"
using namespace std;

int main()
{
	//11 3 
	LinkedList<int> l;
	l.push_back(1);
	l.push_back(2);
	l.push_back(3);
	l.push_back(4);
	l.pop_front();
	l.pop_back();
	l.push_front(44);
	l.pop_front();
	l.insert(1, 11);
	l.erase(0);
	l.print();
}


