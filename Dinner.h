#pragma once

#include "Candy.h"

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Dinner {
private:
	int Day;
	float Time;
public:
	int GetDay();
	float GetTime();

	Dinner();
	~Dinner();
	Dinner(int Day, float Time);

	vector <Candy> Candies;

	void AddCandy(Candy Candy1);
	void SortCandies();
	void PrintAllCandies();
	void FindTheMostExpensiveCandies();
};