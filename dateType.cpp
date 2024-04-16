
#include <iostream>
#include "dateType.h"

using namespace std;

void dateType::setDate(int month, int day, int year)
{
	if (year >= 1900)
		zYear = year;
	else
		zYear = 1900;

	if (1 <= month && month <= 12)
		zMonth = month;
	else
		zMonth = 1;

	switch (zMonth)
	{
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		if (1 <= day && day <= 31)
			zDay = day;
		else
			zDay = 1;
		break;
	case 4:
	case 6:
	case 9:
	case 11:
		if (1 <= day && day <= 30)
			zDay = day;
		else
			zDay = 1;
		break;
	case 2: if (LeapYear())
	{
		if (1 <= day && day <= 29)
			zDay = day;
		else
			zDay = 1;
	}
		  else
	{
		if (1 <= day && day <= 28)
			zDay = day;
		else
			zDay = 1;
	}
	}
}

void dateType::setMonth(int  m)
{
	if (1 <= m && m <= 12)
		zMonth = m;
	else
		zMonth = 1;
}

void dateType::setDay(int d)
{
	switch (zMonth)
	{
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		if (1 <= d && d <= 31)
			zDay = d;
		else
			zDay = 1;
		break;
	case 4:
	case 6:
	case 9:
	case 11:
		if (1 <= d && d <= 30)
			zDay = d;
		else
			zDay = 1;
		break;
	case 2: if (LeapYear())
	{
		if (1 <= d && d <= 29)
			zDay = d;
		else
			zDay = 1;
	}
		  else
	{
		if (1 <= d && d <= 28)
			zDay = d;
		else
			zDay = 1;
	}
	}
}

void dateType::setYear(int y)
{
	if (y >= 1900)
		zYear = y;
	else
		zYear = 1900;
}


void dateType::print() const
{
	cout << zMonth << "-" << zDay << "-" << zYear;
}

int dateType::getMonth()  const
{
	return zMonth;
}

int dateType::getday()  const
{
	return zDay;
}

int dateType::getYear()  const
{
	return zYear;
}

int dateType::get_num_days_month()
{
	int numDays;

	switch (zMonth)
	{
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		numDays = 31;
		break;
	case 4:
	case 6:
	case 9:
	case 11:
		numDays = 30;
		break;
	case 2: if (LeapYear())
		numDays = 29;
		  else
		numDays = 28;
	}

	return numDays;
}

bool dateType::LeapYear()
{

	if (((zYear % 4 == 0) && (zYear % 100 != 0)) || zYear % 400 == 0)
		return true;
	else
		return false;
}

dateType::dateType(int month, int day, int year)
{
	zMonth = month;
	zDay = day;
	zYear = year;
}

int dateType::numberOfDaysPassed()
{
	int daysPassed = 0;
	for (int month = 1; month < getMonth(); month++)
		daysPassed += getday();
	daysPassed += getday();
	return daysPassed;
}

int dateType::numberOfDaysLeft()
{
	int daysLeft;
	int daysPassed = 0;
	for (int month = 1; month < getMonth(); month++)
		daysPassed += getday();
	if (LeapYear())
		return 366 - numberOfDaysPassed();
	else
		return 365 - numberOfDaysPassed();
	return daysLeft;

};


//Wrong//
void dateType::ADD_TO_DATE(int nDays)
{
	int day = getday() + nDays;
	int month = getMonth();
	int year = 0;

	while (day > get_num_days_month()) {
		day -= get_num_days_month();
		zMonth++;
		if (zMonth > 12)
			zMonth = 1;
			if (zMonth == 1)
			{
				zYear++;
			}
			
	}
	setMonth(getMonth());
	setDay(day);
	setYear(getYear() + year);
}