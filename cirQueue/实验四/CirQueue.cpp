//************************
//**** CirQueue.cpp ******
//************************

#include "CirQueue.h"
#include<iostream>
using namespace std;

template <class T>
CirQueue<T>::CirQueue()
{
	front = rear = QueueSize;
}
template <class T>
CirQueue<T>::~CirQueue()
{
	cout << "�������ٶ��С�����������������ɣ�" << endl;
}
template <class T>
void CirQueue<T>::EnQueue(T x)
{
	if ((rear + 1) % QueueSize == front) throw "����";
	rear = (rear + 1) % QueueSize;
	data[rear] = x;
}
template <class T>
T CirQueue<T>::DeQueue()
{
	if (rear == front) throw "����";
	front = (front + 1) % QueueSize;
	return data[front];
}
template <class T>
T CirQueue<T>::GetQueue()
{
	int i = 0;
	if (rear == front) throw "����";
	i = (front + 1) % QueueSize;
	return data[i];
}
template <class T>
int CirQueue<T>::Empty()
{
	if (rear == front)
		return 1;
	else
		return 0;
}