#pragma once

class dateType
{
public:

	//Constructor
	dateType(int month = 1, int day = 1, int year = 1900);
	
	//Precondition: a valid day, month, and year is supplied (see dayOfWeek)
	//Postcondition: stores them if valid, otherwise stores default
	void setDate(int month, int day, int year);
	
	//Precondition: a valid month is supplied (see dayOfWeek)
	//Postcondition: stores month if valid, otherwise stores default
	void setMonth(int);
	
	//Precondition: a valid day is supplied (see dayOfWeek)
	//Postcondition: stores day if valid, otherwise stores default
	void setDay(int);

	//Precondition: a valid year is supplied (see dayOfWeek)
	//Postcondition: stores year if valid, otherwise stores default
	void setYear(int);

	//Postcondition: displays what the date is set to
	void print() const;

	//Precondition: gets the date
	//Postcondition: provides the days that are left that year
	int numberOfDaysLeft();

	//Precondition: gets the date
	//Postcondition: provides the days that have passed that year
	int numberOfDaysPassed();

	//Precondition: input for an amount of days to add
	//Postcondition: edites the day, month, and year to accurately show what the new date would be in that many days
	void ADD_TO_DATE(int nDays);

	//Postcondition: returns value of month
	int getMonth() const;

	//Postcondition: returns value of day
	int getday() const;

	//Postcondition: returns value of year
	int getYear() const;

	//Precondition: need the info to check for a leap year
	//Postcondition: sets the amount of days for each month in the year
	int get_num_days_month();

	//Postcondition: returns whether the year is a leap year or not
	bool LeapYear();



private:
	int zMonth;
	int zDay;
	int zYear;

};
