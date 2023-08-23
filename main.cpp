
#include <iostream>
#include <chrono>

using namespace std;

/*
	кинуть моентку
	
*/

const int start{ 1 }; // орел
const int stop{ 20 };  // решка


void grewup(const int &result) 
{
	if (result > (stop/2)) 
	{
		cout << "Выпала: решка\n";
	}
	else 
	{
		cout << "Выпал: орел \n";
	}
}

int main()
{
	setlocale(LC_ALL, "");


	int monetka;	
	char choise='0';


	while (choise != 'q')
	{
		monetka = rand() % stop + start;
		grewup(monetka);

		cout << "Для повтора нажать любую клавишу. Для выхода нажать клавишу q\n";
		cin >> choise;
	};
}

