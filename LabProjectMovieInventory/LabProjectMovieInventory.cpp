#include <iostream>
#include <iomanip>
#include "movieInfo.h"
using std::cout; using std::cin; using std::endl; using std::string;
void printOut(movieInfo video1, movieInfo video2, movieInfo video3) {
    cout << std::setw(35) << std::left << "Video Title" //Putting a line after printing each variable to make it easier to read
         << std::setw(10) << std::left << "Cost" 
         << std::setw(15) << std::left << " # renting" << endl;
    cout << std::setw(35) << std::left << video1.getName() << "$"
         << std::fixed << std::showpoint << std::setw(10) << std::left << std::setprecision(2) << video1.getCost() 
         << std::setw(15) << std::left << std::noshowpoint << std::setprecision(0) << video1.getRent() << endl;
    cout << std::setw(35) << std::left << video2.getName() << "$"
         << std::fixed << std::showpoint << std::setw(10) << std::left << std::setprecision(2) << video2.getCost()
         << std::setw(15) << std::left << std::noshowpoint << std::setprecision(0) << video2.getRent() << endl;
    cout << std::setw(35) << std::left << video3.getName() << "$"
         << std::fixed << std::showpoint << std::setw(10) << std::left << std::setprecision(2) << video3.getCost()
         << std::setw(15) << std::left << std::noshowpoint << std::setprecision(0) << video3.getRent() << endl;
}
void printAverage(movieInfo a, movieInfo b, movieInfo c, double d) {
    double average = d;
    average /= double(a.getRent() + b.getRent() + c.getRent());
    cout << "The average was $" << std::fixed << std::showpoint << std::setprecision(2) << average << endl;
}
double printTotal(movieInfo a, movieInfo b, movieInfo c) {
    double total = a.getCost() * double(a.getRent()) + b.getCost() * double(b.getRent()) + c.getCost() * double(c.getRent());
    cout << "The total was $" << std::fixed << std::showpoint << std::setprecision(2) << total << endl;
    return total;
}
int main()
{
    double tempCost;
    int tempRent;
    string temp;
    //Extra: Getting user input for the titles of the movies
    cout << "Enter title for 1st Video: ";
    cin >> temp;
    movieInfo video1(temp); //Creating object with the input
    cout << "Enter title for 2nd Video: ";
    cin >> temp;
    movieInfo video2(temp);
    cout << "Enter title for 3rd Video: ";
    cin >> temp;
    movieInfo video3(temp);
    //Getting the cost and rent info for each video
    cout << "How much is " << video1.getName() << "? ";
    cin >> tempCost;
    video1.setCost(tempCost);
    cout << "How many are renting " << video1.getName() << "? ";
    cin >> tempRent;
    video1.setRent(tempRent);

    cout << "How much is " << video2.getName() << "? ";
    cin >> tempCost;
    video2.setCost(tempCost);
    cout << "How many are renting " << video2.getName() << "? ";
    cin >> tempRent;
    video2.setRent(tempRent);
    
    cout << "How much is " << video3.getName() << "? ";
    cin >> tempCost;
    video3.setCost(tempCost);
    cout << "How many are renting " << video3.getName() << "? ";
    cin >> tempRent;
    video3.setRent(tempRent);
    
    //Printing out the info;
    printOut(video1, video2, video3);
    cout << endl << endl;
    double total = printTotal(video1, video2, video3);
    printAverage(video1, video2, video3, total);
    return 0;
}