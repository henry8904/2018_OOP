
#include "MyArrayList.h"
#include <iostream>

using namespace std;

template<class T>
MyArrayList() {
	capacity = DEFAULT_CAPACITY;
	mass = new T[capacity];
	size = 0;
	return T;
}
template<class T>
MyArrayList(int x) {
	capacity = x;
	mass = new T[capacity];
	size = 0;
	return T;
}
template<class T>
bool addElement(T const &x) {
	if (capacity == size) {
		T temp[] = new T[capacity * 2];
		for (int i = 0; i <= size; i++) {
			temp[i] = mass[i];
		}
		T[capacity] = T[capacity * 2];
		for (int i = 0; i < = size; i++) {
			mass[i] = temp[i];
		}
		mass[size + 1] = &x;
		size++;
		return true;

	}
	else {
		mass[size + 1] = &x;
		size++;
		return true;
	}
}
template<class T>
void printIt() {
	cout << "{";
	for (int i = 0; i < size; i++) {
		cout << mass[i];
	}
	cout << "}";
}