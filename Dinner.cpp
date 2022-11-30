#include <iostream>
#include "Candy.h"
#include "Dinner.h"
#include <string>
#include <vector>
#include <array>
using namespace std;

void Dinner::addCandy(Candy Candy1) { Candies.push_back(Candy1); }

void Dinner::SortCandies() {

	for (int step = 0; step < Candies.size(); ++step) {

		for (int i = 0; i < Candies.size() - step; ++i) {

			if (Candies[i].getPrice() > Candies[i + 1].getPrice()) {
				swap(Candies[i], Candies[i + 1]);
			}
		}
	}
}

void Dinner::printAllCandies() {
	for (int i = 0; i < Candies.size(); ++i) {
		std::cout << "\n\n  Name = " << Candies[i].getName() << "\n  Mass = " << Candies[i].getMass() << "\n  Amount = " << Candies[i].getAmount() << "\n  Price = " << Candies[i].getPrice() << "\n  Candy Type = " << Candies[i].getCandyType() << "\n";
	}
}

void Dinner::FindTheMostExpensiveCandies() {
	SortCandies();
	if (Candies.size() >= 3) {
		for (int i = 0; i < 3; ++i) {
			std::cout << "\n\n  Name = " << Candies[i].getName() << "\n  Mass = " << Candies[i].getMass() << "\n  Amount = " << Candies[i].getAmount() << "\n  Price = " << Candies[i].getPrice() << "\n  Candy Type = " << Candies[i].getCandyType() << "\n";
		}
	}
	else {
		for (int i = 0; i < Candies.size(); ++i) {
			std::cout << "\n\n  Name = " << Candies[i].getName() << "\n  Mass = " << Candies[i].getMass() << "\n  Amount = " << Candies[i].getAmount() << "\n  Price = " << Candies[i].getPrice() << "\n  Candy Type = " << Candies[i].getCandyType() << "\n";
		}
	}
}

Dinner::Dinner(int Day1, float Time1) {
	Day = Day1;
	Time = Time1;
}

Dinner::Dinner() {
	Day = 0;
	Time = 0;
}

Dinner::~Dinner() {}

int Dinner::getDay() {
	return Day;
}

float Dinner::getTime() {
	return Time;
}