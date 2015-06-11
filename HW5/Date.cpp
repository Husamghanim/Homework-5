#include "Date.h"
#include <ctime>

Date::Date()
{
	totalSeconds = time(0);
}

Date::Date(int seconds)
{
	totalSeconds = seconds;
}
Date::Date(int newYear, int newMonth, int newDay)
{
	year = newYear;
	month = newMonth;
	day = newDay;
}

int Date::getYear()
{
	return year;
}
int Date::getMonth()
{
	return month;
}
int Date::getDay()
{
	return day;
}
void Date::setDate(int elapseTime)
{
	

}