#include<iostream>
#include<map>
using namespace std;

void main()
{
	setlocale(LC_ALL, "RUS");

	std::map<int, std::string> week =
	{
		std::pair<int,std::string>(0,"Sunday"),
		std::pair<int,std::string>(1,"Monday"),
		std::pair<int,std::string>(2,"Tuesday"),
		{3,"Wednesday"},
		{4,"Thursday"},
		{5,"Friday"},
		{6, "Saturday"},
		{7,"Sunday"},
	};
	for (std::map<int, std::string>::iterator it = week.begin(); it != week.end(); ++it)
	{
		cout << it->first << " - " << it->second << endl;
	}
}