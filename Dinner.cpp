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

			if (Candies[i].GetPrice() > Candies[i + 1].GetPrice()) {
				swap(Candies[i], Candies[i + 1]);
			}
		}
	}
}

void Dinner::PrintAllCandies() {
	for (int i = 0; i < Candies.size(); ++i) {
		cout << "\n\n  Name = " << Candies[i].GetName() << "\n  Mass = " << Candies[i].GetMass() << "\n  Amount = " << Candies[i].GetAmount() << "\n  Price = " << Candies[i].GetPrice() << "\n  Candy Type = " << Candies[i].GetCandyType() << "\n";
	}
}

void Dinner::FindTheMostExpensiveCandies() {
	SortCandies();
	if (Candies.size() >= 3) {
		for (int i = 0; i < 3; ++i) {
			cout << "\n\n  Name = " << Candies[i].GetName() << "\n  Mass = " << Candies[i].GetMass() << "\n  Amount = " << Candies[i].GetAmount() << "\n  Price = " << Candies[i].GetPrice() << "\n  Candy Type = " << Candies[i].GetCandyType() << "\n";
		}
	}
	else {
		for (int i = 0; i < Candies.size(); ++i) {
			cout << "\n\n  Name = " << Candies[i].GetName() << "\n  Mass = " << Candies[i].GetMass() << "\n  Amount = " << Candies[i].GetAmount() << "\n  Price = " << Candies[i].GetPrice() << "\n  Candy Type = " << Candies[i].GetCandyType() << "\n";
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

int Dinner::GetDay() {
	return Day;
}

float Dinner::GetTime() {
	return Time;
}