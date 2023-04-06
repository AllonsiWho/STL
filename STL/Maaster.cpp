#include <iostream>
#include <array>
#include<vector>
#include<deque>
#include<list>
#include <iterator>
using namespace std;
using std::cin;
using std::cout;
using std::endl;

#define tab "\t"
#define delimiter "\n--------------------------------------------------------------------\n"

//template<typename T> void vector_properties(const std::vector<T>& vec)
//{
//	cout << "Size:\t\t" << vec.size() << endl;
//	cout << "Capacity:\t" << vec.capacity() << endl;
//	cout << "Max size:\t" << vec.max_size() << endl;
//
//}

void print(const std::vector<int>& vec)
{
	for (int i : vec)cout << i << tab;
}



//#define STL_VECTOR
//#define STL_DZ
//#define STL_DQEUE
#define STL_LIST

void main()
{
	setlocale(LC_ALL, "RUS");

	

#ifdef STL_VECTOR
	std::vector<int> vec = { 0,1,1,2,3,5,8,13,21,34 };
	for (int i = 0; i < vec.size(); i++)
	{
		//cout << vec[i] << tab;
		cout << vec.at(i) << tab;
	}
	cout << endl;
	//vec.resize(8);
	for (int i : vec)cout << i << tab; cout << endl;
	cout << endl;
	//vector_properties(vec);
	cout << delimiter;
	std::vector<int> vec2(100);
	//vector_properties(vec2);
	vec2.push_back(123);
	//vector_properties(vec2);
	vec2.shrink_to_fit();
	//vector_properties(vec2);
	cout << delimiter;

	for (int i = 0; i < 90; i++)vec2.pop_back();
	//vector_properties(vec2);

#endif // STL_VECTOR
#ifdef STL_DZ


	int size = 0;
	cout << "¬ведите изначальный размер вектора: " << endl; cin >> size;
	std::vector<int> vec ;
	std::vector<int>::iterator it;
	for (int i = 0; i < size; i++)
	{
		vec.push_back(rand() % 100);
	}
	print(vec);
	cout << delimiter;
	int index,value;
	cout << "¬ведите какое значение поставить: "; cin >> value;
	cout << "¬ведите место куда поставить значение: "; cin >> index;
	it = vec.begin();
	vec.insert(it+index, value);	
	print(vec);
	cout << delimiter;	
	cout << "¬ведите какое значение удалить: "; cin >> index;
	it = vec.begin();
	vec.erase(it+index);
	print(vec);
#endif // STL_DZ
#ifdef STL_DQEUE
	
	std::deque<int> deque = { 3,5,8,13,21 };
	for (int i = 0; i < deque.size(); i++)
	{
		cout << deque[i] << tab;
	}
	cout << endl;
	deque.push_front(2);
	deque.push_back(34);
	for (int i : deque)cout << i << tab;




#endif // STL_DQEUE
#ifdef STL_LIST

	std::list<int> list = { 3,5,8,9,10 };
	for (std::list<int>::iterator it = list.begin(); it != list.end(); ++it)
	{
		cout << *it << tab;
	}
	cout << endl;
	for (std::list<int>::reverse_iterator rit = list.rbegin(); rit != list.rend(); ++rit)
	{
		cout << *rit << tab;
	}
	cout << endl;


	int index;
	int value;

	cout << "¬ведите добовл€емое значение: " << endl; cin >> value;
	cout << "¬ведите индекс добовл€емого эллемента: " << endl; cin >> index;
	std::list<int>::iterator position = list.begin();
	//for (int i = 0; i < index; i++)++position;
	std::advance(position, index);
	list.insert(position, value);
	for (int i : list)cout << i << tab; cout << endl;


#endif // STL_LIST


}