// CalendarProject.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "dayType.h"
#include "dateType.h"

using namespace std;

int main()
{
    int num;
    dateType date;

    date.setDate(4, 15, 2024);
    cout << "Set Day: ";
    date.print();
    cout << endl;

    cout << "Days gone in the year: " << date.numberOfDaysPassed();
    cout << endl;

    cout << "Days left in the Year: " << date.numberOfDaysLeft() << endl;

    cout << "Enter number of days to be added: ";
    cin >> num;
    cout << endl;
    date.ADD_TO_DATE(num);

    cout << "After increment date: ";
    date.print();
    cout << endl;

}