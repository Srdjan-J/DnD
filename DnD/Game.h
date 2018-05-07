#pragma once
#include <random>
#include <iostream>
using namespace std;
class Game
{
	Game();
	void printing(int x)
	{
		cout << x;
	}
public:
	std::random_device rd;
	std::mt19937 rng;
	std::uniform_int_distribution<int> D20;
	std::uniform_int_distribution<int> D12;
	std::uniform_int_distribution<int> D10;
	std::uniform_int_distribution<int> D8;
	std::uniform_int_distribution<int> D6;
	std::uniform_int_distribution<int> D4;
};