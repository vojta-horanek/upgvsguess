#include <stdio.h>
#include <Windows.h>
#include <iostream>
#include <string>
#include <chrono>
#include <thread>
#include <stdlib.h>
#include <time.h>

using namespace std;

void hadat();

int main()
{

	std::string bla = "";
	for (int i = 0; i<100; i++)
	{
		cout << endl << bla << ">" << i << "/100";

		if (i >= 85 && i <= 89)
		{
			cout << endl << "Uz to skoro bude" << endl;
		}
		else if (i >= 90)
		{
			cout << endl << "Tohle je jenom placeholder, doopravdy se nic nenacita :PP" << endl;
		}
		bla += "=";
		std::this_thread::sleep_for(std::chrono::milliseconds(2002));
		system("cls");
	}
	
	hadat();

	system("pause");

		
}

void hadat()
{
	srand(time(NULL));
	int i = rand() % 100 + 1;
	int x = 0;
	bool isItgoo = true;
	while (isItgoo)
	{
		cout << "Cislo: ";
		cin >> x;

		if (x > i)
		{
			cout << "Spatne, uber" << endl;
		}
		else if (x < i)
		{
			cout << "Spatne, pridej" << endl;

		}
		else
		{
			cout << "Spravne" << endl;
			isItgoo = false;
		}
	}
}

