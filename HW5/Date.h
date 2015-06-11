#ifndef DATE_H
#define DATE_H


class Date
{
private:
	int year;
	int month;
	int day;
	int totalSeconds;
public:
	Date();
	Date(int);
	Date(int, int, int);
	int getYear();
	int getMonth();
	int getDay();
	void setDate(int);
};
#endif