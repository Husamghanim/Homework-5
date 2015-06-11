#include "NewVector.h"

using namespace std;



template<typename T>
NewVector<T>::NewVector()
{
	capacity = 0;
	vectorArray=new T[capacity];
	sizeOfVector = 0;
}

template<typename T>
void NewVector<T>::push_back(T element)
{
	if (sizeOfArray==capacity)
	{
		T*tempArray=new T[capacity];
		for (int i = 0; i < capacity; i++)
		{
			tempArray[i] = vectorArray[i];
		}
		capacity++;

		vectorArray = new T[capacity];
		for (int i = 0; i < capacity - 1; i++)
		{
			vectorArray[i] = tempArray[i];
		}
		vectorArray[capacity] = element;
		sizeOfVector++;
		delete[]tempArray;
	}
}
template<typename T>
void NewVector<T>::pop_back()
{
	T*tempArray=new T[capacity];
	for (int i = 0; i < capacity; i++)
	{
		tempArray[i] = vectorArray[i];
	}
	capacity--;

	vectorArray = new T[capacity];
	for (int i = 0; i < capacity; i++)
	{
		vectorArray[i] = tempArray[i];
	}
	vectorArray[capacity] = element;
	sizeOfVector--;
	delete[] tempArray;
}
template<typename T>
int NewVector<T>::size() const
{
	return sizeOfVector;
}
template<typename T>
T NewVector<T>::at(int index) const
{
	return vectorArray[index];
}
template<typename T>
bool NewVector<T>::empty() const
{
	bool t;
	if (size == 0)
		t= true;
	else
		t=false;
	return t;
}
template<typename T>
void NewVector<T>::clear()
{
	sizeOfVector = 0;
}
template<typename T>
void NewVector<T>::swap(NewVector v)
{
	T*tempArray = new T[v.size()];
	tempArray = this->vectorArray;
	this->vectorArray = v.vectorarray;
	v.vectorArray = tempArray;
	delete[] tempArray;


}
