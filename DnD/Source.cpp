#include <random>
#include <iostream>
#include <ctime>
using namespace std;
int x;
int y;
int sum = 0;
int sum1 = 0;
std::random_device rd;
std::mt19937 rng(time(0));
std::uniform_int_distribution<int> D100(1, 100);
std::uniform_int_distribution<int> D20(1, 20);
std::uniform_int_distribution<int> D12(1, 12);
std::uniform_int_distribution<int> D10(1, 10);
std::uniform_int_distribution<int> D8(1, 8);
std::uniform_int_distribution<int> D6(1, 6);
std::uniform_int_distribution<int> D4(1, 4);
void main()
{
	cout << "Which die do you want to roll?";  cin >> x; cout << endl;
	cout << "How many times do you want to roll it?"; cin >> y; cout << endl;
	if (x == 100)
	{
		for (int i = 0; i < y; i++)
		{
			sum = D100(rng);
			cout << sum << endl;
			sum1 = sum1 + sum;
		}
		cout << endl << "The sum is:" << sum1 << endl;
	}
	if (x == 20)
	{
		for (int i = 0; i < y; i++)
		{
			sum = D20(rng);
			cout << sum << endl;
			sum1 = sum1 + sum;
		}
		cout << endl << "The sum is:" << sum1 << endl;
	}
	if (x == 12)
	{
		for (int i = 0; i < y; i++)
		{
				sum = D12(rng);
				cout << sum << endl;
				sum1 = sum1 + sum;
		}
		cout << endl << "The sum is:" << sum1 << endl;
	}
	if (x == 10)
	{
		for (int i = 0; i < y; i++)
		{
			sum = D10(rng);
			cout << sum << endl;
			sum1 = sum1 + sum;
		}
		cout << endl << "The sum is:" << sum1 << endl;
	}
	if (x == 8)
	{
		for (int i = 0; i < y; i++)
		{
			sum = D8(rng);
			cout << sum << endl;
			sum1 = sum1 + sum;
		}
		cout << endl << "The sum is:" << sum1 << endl;
	}
	if (x == 6)
	{
		for (int i = 0; i < y; i++)
		{
			sum = D6(rng);
			cout << sum << endl;
			sum1 = sum1 + sum;
		}
		cout << endl << "The sum is:" << sum1 << endl;
	}
	if (x == 4)
	{
		for (int i = 0; i < y; i++)
		{
			sum = D4(rng);
			cout << sum << endl;
			sum1 = sum1 + sum;
		}
		cout << endl << "The sum is:" << sum1 << endl;
	}
	system("PAUSE");
}
