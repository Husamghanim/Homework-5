#ifndef NEWVECTOR_H
#define NEWVECTOR_H

using namespace std;

template < typename T > 
class NewVector
{
public:
	NewVector();
	
	
	void push_back(T);
	void pop_back();
	int size()const;
	T at(int)const;
	bool empty()const;
	void clear();
	void swap(NewVector);
private:
	int capacity;
	T*vectorArray;
	int sizeOfVector;


};
#endif
