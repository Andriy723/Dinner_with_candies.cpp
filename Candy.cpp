#include "Candy.h"
#include "Dinner.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;

Candy::Candy(string Name1, double Mass1, int Amount1, float Price1, Type CandyType1) {
	Name = Name1;
	Mass = Mass1;
	Amount = Amount1;
	Price = Price1;
	CandyType = CandyType1;
};


void Candy::Ate() {
	if (Mass * Amount > 2000) {
		cout << "You are on a diet!" << "\n  ";
	}
	else {
		cout << "What delicious candy!" << "\n  ";
	}
};


Candy::Candy() {
	Name = { "Name wasn`t found!" };
	Mass = 0;
	Amount = 0;
	Price = 0;
}

Candy::~Candy() {}

int Candy::getCandyType() {
	return CandyType;
}
string Candy::getName() {
	return Name;
}

double Candy::getMass() {
	return Mass;
}

int Candy::getAmount() {
	return Amount;
}

float Candy::getPrice() {
	return Price;
}