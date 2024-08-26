#include "Node.h"

template<class T>
Node<T>::Node() {
	next = nullptr;
}

template <class T>
Node<T>::Node(T value):value(value) {
	next = nullptr;
}

template class Node<int>;