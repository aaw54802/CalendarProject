#include <iostream>
#include "dayType.h"


string dayType::dayOfWeek[] = { "Sunday", "Monday", "Tuesday", "Wednesday",
                       "Thursday", "Friday", "Saturday" };

void dayType::setDay(string aDay)
{
    int index = 0;
    for (int i = 0; i < 7; i++)
    {
        if (dayOfWeek[i] == aDay)
        {
            index = i;
            break;
        }
    }
    weekDay = dayOfWeek[index];
}

void dayType::print() const
{
    cout << weekDay << endl;
}

string dayType::nextDay()
{
    int i;

    for (i = 0; i < 7; i++)
        if (dayOfWeek[i] == weekDay)
            break;
    return dayOfWeek[(i + 1) % 7];
}

string dayType::previousDay()
{
    if (weekDay == "Sunday")
        return "Saturday";
    else if (weekDay == "Sun")
        return "Sat";
    else
    {
        int i;

        for (i = 0; i < 7; i++)
            if (dayOfWeek[i] == weekDay)
                break;
        return dayOfWeek[i - 1];
    }
}

void dayType::addDays(int nDays)
{
    int i;

    for (i = 0; i < 7; i++)
        if (dayOfWeek[i] == weekDay)
            break;
    weekDay = dayOfWeek[(i + nDays) % 7];
}

dayType::dayType(string start)
{
    setDay(start);
}