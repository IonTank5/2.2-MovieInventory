#include "movieInfo.h"
void movieInfo::setName(std::string x) {
	name = x;
}
void movieInfo::setCost(double x) {
	cost = x;
}
void movieInfo::setRent(int x) {
	rent = x;
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