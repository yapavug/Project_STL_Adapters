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

	stack<int, vector<int>> st2; // Теперь положим в основу стека контейнер vector
	//Доступные мметоды для работы не изменились. Стек остался стеком, но изменилось быстродействие для доступа к элементам. Ранее в основе был deque, теперь - vector

	st2.emplace(4); //Создание эл-та непосредственно в адаптере

	st2.emplace(77); //Создание эл-та непосредственно в адаптере

	st2.emplace(101); //Создание эл-та непосредственно в адаптере

	auto b = st2._Get_container();

	cout << b[1] << endl;


	st.emplace(1); //Создание эл-та непосредственно в адаптере

	st.push(2); // Создание эл-та и копирование его в адаптер

	st.emplace(32); //Создание эл-та непосредственно в адаптере

	st.emplace(72); //Создание эл-та непосредственно в адаптере

	auto a = st._Get_container(); // Возвращает "сырой" контейнер, который был положен в основу stack (по умолчанию - deque)

	cout << a[2] << endl << endl;

	while (!st.empty())
	{
		cout << st.top() << endl; // Возвращает вершину стека
		st.pop(); // Удаляет вершину
	}



	return 0;
}