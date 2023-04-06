#include <iostream>
#include <array>
#include<vector>
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
#define STL_DZ
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
	vec.resize(8);
	for (int i : vec)cout << i << tab; cout << endl;
	cout << endl;
	vector_properties(vec);
	cout << delimiter;
	std::vector<int> vec2(100);
	vector_properties(vec2);
	vec2.push_back(123);
	vector_properties(vec2);
	vec2.shrink_to_fit();
	vector_properties(vec2);
	cout << delimiter;

	for (int i = 0; i < 90; i++)vec2.pop_back();
	vector_properties(vec2);

#endif // STL_VECTOR
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
	int insert,value;
	cout << "¬ведите какое значение поставить: "; cin >> value;
	cout << "¬ведите место куда поставить значение: "; cin >> insert;
	it = vec.begin();
	vec.insert(it+insert,1, value);	
	print(vec);
	cout << delimiter;	
	cout << "¬ведите какое значение удалить: "; cin >> insert;
	it = vec.begin();
	vec.erase(it+insert);
	print(vec);


}