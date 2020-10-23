#include "movieInfo.h"
void movieInfo::setName(std::string x) {
	name = x;
}
void movieInfo::setCost(int x) {
        double temp;
        while (true) {
            std::cout << "How much is " << name << " ";
            std::cin >> temp;
            if (temp >= 0.01) {
                break;
            }
            else {
                std::cout << "Invalid input";
            }
        }
        cost = temp;
}
void movieInfo::setRent(int x) {
    int temp;
    while (true) {
        std::cout << "How many are renting " << name << " ";
        std::cin >> temp;
        if (temp >= 0) {
            break;
        }
        else {
            std::cout << "Invalid input";
        }
    }
    rent = temp;
}

std::string movieInfo::getName() {
	return name;
}

double movieInfo::getCost() {
	return cost;
}

double movieInfo::getRent() {
	return rent;
}