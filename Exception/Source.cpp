#include <iostream>
using namespace std;
//#define EXCEPTION_BASICS
//#define DEVISION_BY_ZERO
void main()
{
	setlocale(LC_ALL, "RUS");
#ifdef EXCEPTION_BASICS


	try 
	{
		throw;
	//throw 1;
	//throw "Something went wrong";
		throw std::exception("STD exception throw");
	}
	catch (int e)
	{
		std::cerr << "Error #" << e << std::endl;
	}
	catch (const char* e)
	{
		std::cerr << "Error " << e << endl;
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << endl;
		// ћетод what возвращает сообщение об ошибке в виде c-string (const char*)
	}
	catch (...)
	{
		std::cerr << "Errror: Some exception was throw..." << endl;
	}


	cout << "Final " <<  endl;
#endif // EXCEPTION_BASICS
#ifdef DEVISION_BY_ZERO


	int a, b;
	cout << "¬ведите два числа: "; cin >> a >> b;
	try
	{
	cout << a / b << endl;

	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << endl;
	}
	catch (...)
	{
		std::cerr << "Something went wrong" << endl;
	}

#endif // DEVISION_BY_ZERO

}