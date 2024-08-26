#include "LinkedList.h"
#include "iostream"
using namespace std;

template <class T>
LinkedList<T>::LinkedList() {
	head = nullptr;
	size = 0;
}

template<class T>
void LinkedList<T>::push_front(T value){
	Node<T>* newNode = new Node<T>(value);
	size++;
	if (head == nullptr) {
		head = newNode;
	
		return;
	}
	newNode->next = head;
	head = newNode;
	}

template<class T>
void LinkedList<T> ::pop_front() {
	if (head==nullptr) {
		return;
	}
	Node<T> *tmp = head;
	head = head->next;
	delete tmp;
	size--;
}
template<class T>
void LinkedList<T>::push_back(T value) {
	Node<T>* newNode = new Node<T>(value);
	size++;
	if (head == nullptr) {
		head = newNode;
		return;
	}
	Node<T>* curr = head;
	while (curr->next != nullptr) {
		curr = curr->next;
	}
	curr->next = newNode;
}
template <class T>
void LinkedList<T>::pop_back() {
	if (head == nullptr) {
		return;
	}
	if (size == 1) {
		pop_front();
		return;
	}
	size--;
	Node<T>* curr = head;
	Node<T>* prev = head;
	while (curr->next != nullptr) {
		prev = curr;
		curr = curr->next;
	}
	
	delete curr;
	prev->next = nullptr;
}
template<class T>
void LinkedList<T>::print() {
	Node<T>* curr = head;
	while (curr != nullptr) {
		cout << curr->value << endl;
		curr = curr->next;
	}
}
template <class T>
void LinkedList<T>::erase(int index) {
	if (head == nullptr) {
		return;
	}
	if (index == 0) {
		pop_front();
		return;
	}
	Node<T>* curr = head;
	Node<T>* prev = curr;
	for (int i = 0; i < index; i++) {
		prev = curr;
		curr = curr->next;
	}
	prev->next = curr->next;
	delete curr;
	size--;
}

template<class T>
void LinkedList<T>::insert(int index,T value) {
	if (index==0) {
		push_front(value);
		return;
	}
	
	Node<T>* newNode = new Node<T>(value);
	size++;
	Node<T>* curr = head;
	Node<T>* prev = head;
	for (int i = 0; i < index; i++) {
		prev = curr;
		curr = curr->next;
	}
	
	prev->next = newNode;
	newNode->next = curr;
	
}


template<class T>
LinkedList<T>::~LinkedList() {
	while (size != 0) {
		pop_front();
	}
}

template class LinkedList<int>;