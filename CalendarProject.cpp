// CalendarProject.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include "dayType.h"

using namespace std;

int main()
{
	for (int i = 0; i < 7; i++)
		cout << dayType::dayOfWeek[i] << " ";
	cout << endl;

	dayType::dayOfWeek[0] = "Sun";
	dayType::dayOfWeek[1] = "Mon";
	dayType::dayOfWeek[2] = "Tue";
	dayType::dayOfWeek[3] = "Wed";
	dayType::dayOfWeek[4] = "Thu";
	dayType::dayOfWeek[5] = "Fri";
	dayType::dayOfWeek[6] = "Sat";

	for (int i = 0; i < 7; i++)
		cout << dayType::dayOfWeek[i] << " ";
	cout << endl;


	dayType day;
	day.getDay();

	day.print();
	cout << endl;

	day.previousDay();
	cout << "Previous Day: " << day.previousDay() << endl;

	day.setDay("Wed");
	cout << "Set Day: ";
	day.print();
	cout << endl;

	cout << "Next Day: " << day.nextDay() << endl;

	day.addDays(12);
	cout << "Add days: ";
	day.print();
	cout << endl;

}
