#include <iostream>
#include <Windows.h>
using namespace std;

void main() {
	setlocale(LC_ALL, "Russian");
	int n;
	cout << " input line = "; cin >> n;
	for (int i1 = 0; i1 < n; i1++)
	{
		for (int i = 0; i < 5; i++) // кубик с размером
		{
			for (int j = 0; j < n; j++)
			{
				if (i % 2 == 0 and j % 2 == 0 and i1 % 2 == 0) for (int z = 0; z < 10; z++) cout << "*";
				if (i % 2 == 0 and j % 2 != 0 and i1 % 2 == 0) for (int z = 0; z < 10; z++) cout << " ";
				if (i % 2 != 0 and j % 2 == 0 and i1 % 2 == 0) for (int z = 0; z < 10; z++) cout << "*";
				if (i % 2 != 0 and j % 2 != 0 and i1 % 2 == 0) for (int z = 0; z < 10; z++) cout << " ";

				if (i % 2 == 0 and j % 2 == 0 and i1 % 2 != 0) for (int z = 0; z < 10; z++) cout << " ";
				if (i % 2 == 0 and j % 2 != 0 and i1 % 2 != 0) for (int z = 0; z < 10; z++) cout << "*";
				if (i % 2 != 0 and j % 2 == 0 and i1 % 2 != 0) for (int z = 0; z < 10; z++) cout << " ";
				if (i % 2 != 0 and j % 2 != 0 and i1 % 2 != 0) for (int z = 0; z < 10; z++) cout << "*";
			}
			cout << "\n";
		}
	}

}