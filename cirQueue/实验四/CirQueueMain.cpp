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
	cout << "请输入要入队的个数：" << endl;
	cin >> Len;
	cout << "依次输入要入队的数据" << "(" << Len << "个)" << endl;
	for (int i = 0; i < Len;i++)
	{
		cin >> temp;
		cq.EnQueue(temp);
	}	
	cout << "入队完成。\n当前队头元素为：" << cq.GetQueue() << endl;
	cout << "执行出队操作······" << "出队完成，数据 " << cq.DeQueue() << " 已出队。" << endl;
	cout << "当前队头元素为：" << cq.GetQueue() << endl;
	cout << "正在将数据 30 入队······入队完成。" << endl;
}