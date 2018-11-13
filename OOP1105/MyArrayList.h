#ifndef MYARRAYLIST_H
#define MYARRAYLIST_H

//¾Æ¾Æ¾Æ
using namespace std;

template <typename T>
class MyArrayList {
public:
	MyArrayList();
	MyArrayList(int x);
	bool addElement(T const &x);
	void printIt();

private:
	const static int DEFAULT_CAPACITY = 10;
	T *mass;
	int capacity = 0;
	int size = 0;
};

#endif

#include <string>
#include <iostream>

using namespace std;

template<class T>
MyArrayList<T>::MyArrayList() {
	capacity = DEFAULT_CAPACITY;
	mass = new T[capacity];
	size = 0;
	
}
template<class T>
MyArrayList<T>::MyArrayList(int x) {
	capacity = x;
	mass = new T[capacity];
	size = 0;
	
}
template<class T>
bool MyArrayList<T>::addElement(T const &x) {
	mass[size] = x;
	size++;
	return true;
}
template<class T>
void MyArrayList<T>::printIt() {
	cout << "{";
	for (int i = 0; i < size; i++) {
		cout << mass[i] << " ";
	}
	cout << "}" << endl;
}