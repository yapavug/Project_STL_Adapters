#include <iostream>
using namespace std;
#include <vector>
#include <list>
#include <deque>
#include <stack>


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



	return 0;
}