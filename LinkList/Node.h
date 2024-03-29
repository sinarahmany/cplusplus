#pragma once
#include <iostream>
//add template for flexible linked list
template<typename T>
class Node {

//friend class LinkedList; //linked list can access Node class

private:

	T data;
	Node<T> *nextPtr;
	Node<T> *prevPtr;

	//                  ______
	//				   |      |
	//      prevPtr <--| data |-->nextPtr
	//                 |______|

public:
	Node<T>();//default constructor signature
    Node<T>(const T &data);  //overloaded constuctor signature
    T getData() const;
    void setData(T data)const;
    Node<T>* getNextPtr();
    Node<T>* getPrevPtr();
    void setPrevPtr(Node<T> *prevPtr);
    void setNextPtr(Node<T> *nextPtr);
};

template <typename T>
Node<T>::Node() // default constructor implementation
//: Node(NULL) //delegated constructor // string will not work with null value
{
}

template <typename T>
Node<T>::Node(const T &data) //overloaded constructor implementation
: data(data),
nextPtr(nullptr), prevPtr(nullptr)
{
}

template <typename T>
T Node<T>::getData() const // getter implementation
{
    return data;
}

template <typename T>
void Node<T>::setData(T data)const{
    this->data = data;
}
template <typename T>
void Node<T>::setNextPtr(Node<T> *nextPtr){
    this->nextPtr = nextPtr;
}
template <typename T>
void Node<T>::setPrevPtr(Node<T> *prevPtr){
    this->prevPtr = prevPtr;

}
template <typename T>
Node<T>* Node<T>::getPrevPtr()
{
    return prevPtr;
}
template <typename T>
Node<T>* Node<T>::getNextPtr()
{
    return nextPtr;
}
