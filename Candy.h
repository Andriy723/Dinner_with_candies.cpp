#pragma once

#include <iostream>
#include <string>

using namespace std;

enum Type {
	Bar,
	Button,
	Popcorn,
	Gum
};

class Candy {
private:
	string Name;
	double Mass;
	int Amount;
	float Price;
	Type CandyType;
public:
	string GetName();
	double GetMass();
	int GetAmount();
	float GetPrice();
	int GetCandyType();

	void Ate();

	Candy();
	Candy(string Name, double Mass, int Amount, float Price, Type CandyType);
	~Candy();
};