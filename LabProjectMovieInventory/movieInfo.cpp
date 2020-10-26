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
                std::cout << "Please enter non negative number" << std::endl;
            }
        }
        cost = temp;
}
void movieInfo::setRent(int x) {
    double temp;
    while (true) {
        std::cout << "How many are renting " << name << " ";
        std::cin >> temp;
        if (temp >= 0 && temp==floor(temp)) {
            break;
        }
        else if (temp < 0 && temp!=floor(temp)) {
            std::cout << "Please enter non negative whole number " << std::endl;
        }
        else if(!temp >= 0){
            std::cout << "Please enter non negative number" << std::endl;
        }
        else {
            std::cout << "Please enter whole number" << std::endl;
        }
    }
    rent = int(temp);
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