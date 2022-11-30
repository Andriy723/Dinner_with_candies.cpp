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
	int getDay();
	float getTime();
	Dinner();
	~Dinner();
	Dinner(int Day, float Time);
	vector <Candy> Candies;
	void addCandy(Candy Candy1);
	void SortCandies();
	void printAllCandies();
	void FindTheMostExpensiveCandies();
};