#pragma once
#include <iostream>
class movieInfo
{
public:
	movieInfo(std::string x) { //Constructor
		name = x;
	}
	void setName(std::string x); //Creating the functions and setting their parameters
	void setRent(int x);
	void setCost(int x);
	std::string getName();
	double getRent();
	double getCost();
private:
	double cost; //Variables used for the object
	int rent;
	std::string name;
};