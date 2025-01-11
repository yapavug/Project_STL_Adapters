//�������� �����������. ����� ��������� � ������������ ��� �����������

#include <iostream>
using namespace std;
#include <vector>
#include <list>
#include <deque>
#include <stack>
#include <queue>


int main()
{
	setlocale(LC_ALL, "ru");
	cout << "---		STACK		---" << endl << endl;

	stack<int> st;

	stack<int, vector<int>> st2; // ������ ������� � ������ ����� ��������� vector
	//��������� ������� ��� ������ �� ����������. ���� ������� ������, �� ���������� �������������� ��� ������� � ���������. ����� � ������ ��� deque, ������ - vector

	st2.emplace(4); //�������� ��-�� ��������������� � ��������

	st2.emplace(77); //�������� ��-�� ��������������� � ��������

	st2.emplace(101); //�������� ��-�� ��������������� � ��������

	auto b = st2._Get_container();

	cout << b[1] << endl;


	st.emplace(1); //�������� ��-�� ��������������� � ��������

	st.push(2); // �������� ��-�� � ����������� ��� � �������

	st.emplace(32); //�������� ��-�� ��������������� � ��������

	st.emplace(72); //�������� ��-�� ��������������� � ��������

	auto a = st._Get_container(); // ���������� "�����" ���������, ������� ��� ������� � ������ stack (�� ��������� - deque)

	cout << a[2] << endl << endl;

	while (!st.empty())
	{
		cout << st.top() << endl; // ���������� ������� �����
		st.pop(); // ������� �������
	}


	cout << "---		QUEUE � PRIORITY QUEUE		---" << endl << endl;
	//������� ��������� - �� ����� - deque, ����� �������� � list, �� ������ � vector
	queue<int, list<int>> q;
	q.emplace(1);
	q.emplace(45);
	q.emplace(84);
	q.emplace(129);

	cout << q.back() << endl << endl;

	cout << q.front() << endl << endl;

	//while (!q.empty())
	//{
	//	cout << "size:	" << q.size() << endl;
	//	cout << q.front() << endl;
	//	q.pop();
	//}

	//auto a = q._Get_container();

	priority_queue<int> q2;
	// ������� � ����������� ����� ������������ vector � deque, �� �� ����� list

	q2.emplace(83);
	q2.emplace(22);
	q2.emplace(37);

	while (!q2.empty())
	{
		cout << "size:	" << q2.size() << endl;
		cout << q2.top() << endl;
		q2.pop();
	}

	return 0;
}