//************************
//*** CirQueueMain.cpp ***
//************************

#include"CirQueue.cpp"
#include<iostream>
using namespace std;
void main()
{
	CirQueue<int> cq;
	int temp;
	int Len;
	cout << "������Ҫ��ӵĸ�����" << endl;
	cin >> Len;
	cout << "��������Ҫ��ӵ�����" << "(" << Len << "��)" << endl;
	for (int i = 0; i < Len;i++)
	{
		cin >> temp;
		cq.EnQueue(temp);
	}	
	cout << "�����ɡ�\n��ǰ��ͷԪ��Ϊ��" << cq.GetQueue() << endl;
	cout << "ִ�г��Ӳ���������������" << "������ɣ����� " << cq.DeQueue() << " �ѳ��ӡ�" << endl;
	cout << "��ǰ��ͷԪ��Ϊ��" << cq.GetQueue() << endl;
	cout << "���ڽ����� 30 ��ӡ����������������ɡ�" << endl;
}