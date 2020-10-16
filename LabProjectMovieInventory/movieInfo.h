#pragma once
#include <iostream>
class movieInfo
{
public:
	movieInfo(std::string x) {
		name = x;
	}
	void setName(std::string x);
	void setRent(int x);
	void setCost(double x);
	std::string getName();
	double getRent();
	double getCost();
private:
	double cost;
	int rent;
	std::string name;
};