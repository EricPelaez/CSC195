// DataTypes.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

struct Worker
{
public:
    string name;
    int age;
    float wage;
    int daysWorked;
    int totalHours=0;
    const float tax = .1f;


};
int main()
{
    int TH;

    Worker w1;
    std::cout << "Enter Worker's Name: \n";
    std::cin >> w1.name;
    std::cout << "\nEnter Age: ";
    std::cin >> w1.age;
    std::cout << "\nEnter Wage: ";
    std::cin >> w1.wage;
    std::cout << "\nEnter How Many Days Worked: ";
    std:cin >> w1.daysWorked;

    for (int count = 0; count < w1.daysWorked; count++)
    {
        std::cout << "\nHow many hours did you work:";
        std::cin >> TH;
        w1.totalHours += TH;
        
    }
    std::cout << w1.name << " worked "<<  w1.totalHours << " hours at $" << w1.wage << " an hour.";
    std::cout << "\nGross Income: " << w1.totalHours * w1.wage;
    std::cout << "\nNet Income: " << ((w1.totalHours * w1.wage)-((w1.totalHours * w1.wage) * w1.tax));


}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
