#include <iostream>
#include <Windows.h>
using namespace std;



void main() {
	setlocale(LC_ALL, "Russian");
	
	
	int n, v, s;
	v = 0;

	cout << " input line = "; cin >> n;

	




	if (n % 2 == 0)
	{
		v = n / 2;


		for (int q = 0; q < v; q++)
		{

			for (int l = 0; l < 5; l++)
			{
					for (int j = 0; j < v; j++) // количество квадратов
				{
					for (int i = 0; i < 10; i++)
					{
						
						cout << "*";
					}

					for (int p = 0; p < 10; p++)
					{
						cout << " ";
					}

				}
				
				cout << "\n";
			}

			for (int l = 0; l < 5; l++)
			{
				

				for (int j = 0; j < v; j++) // количество квадратов
				{
					for (int p = 0; p < 10; p++)
					{
						cout << " ";
					}

					for (int i = 0; i < 10; i++)
					{
						
						cout << "*";
					}

				}
				
				cout << "\n";
			}

		}

	}
	else
	{
		v = n / 2;
		for (int q = 0; q < v + 1; q++)
		{

			for (int l = 0; l < 5; l++)
			{
				

				for (int j = 0; j < v + 1; j++) // количество квадратов
				{
					for (int i = 0; i < 10; i++)
					{
						
						cout << "*";
					}
					if (j != v)
					{
						for (int p = 0; p < 10; p++)
						{
							cout << " ";
						}

					}

				}
				
				cout << "\n";
			}
			if (q != v)
			{
				for (int l = 0; l < 5; l++)
				{
					
					for (int j = 0; j < v; j++) // количество квадратов
					{
						for (int p = 0; p < 10; p++)
						{
							cout << " ";
						}

						for (int i = 0; i < 10; i++)
						{
							
							cout << "*";
						}

					}
					for (int p = 0; p < 10; p++)
					{
						cout << " ";
					}
					
					cout << "\n";
				}
			}
		}
	}

	}