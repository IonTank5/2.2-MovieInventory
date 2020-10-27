#include "movieInfo.h"
void movieInfo::setName(std::string x) {
	name = x;
}
void movieInfo::setCost(int x) { //Set cost method
        double temp;
        while (true) {
            std::cout << "How much is " << name << " "; // Getting the input
            std::cin >> temp;
            if (temp >= 0) { //Checking if it is at least 0
                break;
            }
            else {
                std::cout << "Please enter non negative number" << std::endl; //Printing out to user to tell what they need to fix
            }
        }
        cost = temp;
}
void movieInfo::setRent(int x) {
    double temp;
    while (true) {
        std::cout << "How many are renting " << name << " ";
        std::cin >> temp;
        if (temp >= 0 && temp == floor(temp)) { //Errror trapping the user and printing out the correct message to them
            break;
        }
        else if (temp < 0 && temp != floor(temp)) {
            std::cout << "Please enter non negative whole number " << std::endl;
        }
        else if (temp != floor(temp)) {
            std::cout << "Please enter whole number" << std::endl;
        }
        else if (!temp >= 0) {
            std::cout << "Please enter non negative number" << std::endl;
        }
    }
    rent = int(temp);
}
//Generic get methods, returning the correct value
std::string movieInfo::getName() {
	return name;
}

double movieInfo::getCost() {
	return cost;
}

double movieInfo::getRent() {
	return rent;
}